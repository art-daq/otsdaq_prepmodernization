#include "otsdaq-prepmodernization/FEInterfaces/FENIMPlusInterface.h"
#include "otsdaq-core/MessageFacility/MessageFacility.h"
#include "otsdaq-core/Macros/CoutHeaderMacros.h"
#include "otsdaq-core/Macros/InterfacePluginMacros.h"
#include <iostream>     // std::cout, std::dec, std::hex, std::oct
#include <set>
#include <stdint.h>
#include <bitset>

using namespace ots;

#undef 	__MF_SUBJECT__
#define __MF_SUBJECT__ "FE-FENIMPlusInterface"

//========================================================================================================================
//FENIMPlusInterface::FENIMPlusInterface(unsigned int name,
//		std::string daqHardwareType, std::string firmwareType, const FEWConfiguration* configuration)
//:Socket            (theConfiguration_->getInterfaceIPAddress(name), theConfiguration_->getInterfacePort(name))
//,FEVInterface     (name,daqHardwareType,firmwareType,configuration)
//,OtsUDPHardware    (theConfiguration_->getIPAddress(name), theConfiguration_->getPort(name))
//,FSSRFirmware      (theConfiguration_->getFirmwareVersion(name), "PurdueFirmwareCore")
//,theConfiguration_ ((FEWOtsUDPHardwareConfiguration*)configuration)
//
//{
//    __COUT__ << __PRETTY_FUNCTION__ << "Few name: " << name
//    << " Interface IP: "   << theConfiguration_->getInterfaceIPAddress(name)
//    << " Interface Port: " << theConfiguration_->getInterfacePort(name)
//    << " IP: "             << theConfiguration_->getIPAddress(name)
//    << " Port: "           << theConfiguration_->getPort(name)
//    << std::endl;
//}
//========================================================================================================================
FENIMPlusInterface::FENIMPlusInterface(const std::string& interfaceUID, const ConfigurationTree& theXDAQContextConfigTree, const std::string& interfaceConfigurationPath)
: Socket            (
		theXDAQContextConfigTree.getNode(interfaceConfigurationPath).getNode("HostIPAddress").getValue<std::string>()
		, theXDAQContextConfigTree.getNode(interfaceConfigurationPath).getNode("HostPort").getValue<unsigned int>())
, FEVInterface      (interfaceUID, theXDAQContextConfigTree, interfaceConfigurationPath)
, OtsUDPHardware    (
		theXDAQContextConfigTree.getNode(interfaceConfigurationPath).getNode("InterfaceIPAddress").getValue<std::string>()
		, theXDAQContextConfigTree.getNode(interfaceConfigurationPath).getNode("InterfacePort").getValue<unsigned int>()
		, -1 /*version*/
		, true /*verbose*/)
, OtsUDPFirmwareDataGen(theXDAQContextConfigTree.getNode(interfaceConfigurationPath).getNode("FirmwareVersion").getValue<unsigned int>())
{
	//    __COUT__ << "FE name: " << interfaceUID << std::endl;
	//    __COUT__ << " Interface IP: "   << FEVInterface::theXDAQContextConfigTree_.getNode(interfaceConfigurationPath).getNode("IPAddress").getValue<std::string>() << std::endl;
	//    __COUT__ << " Interface Port: " << FEVInterface::theXDAQContextConfigTree_.getNode(interfaceConfigurationPath).getNode("Port").getValue<std::string>() << std::endl;
	//    __COUT__ << " IP: "             << FEVInterface::theXDAQContextConfigTree_.getNode(interfaceConfigurationPath).getNode("IP").getValue<std::string>() << std::endl;
	//    __COUT__ << " Port: "           << FEVInterface::theXDAQContextConfigTree_.getNode(interfaceConfigurationPath).getNode("IPAddress").getValue<std::string>() << std::endl;
	universalAddressSize_ = 8;
	universalDataSize_    = 8;
}

//========================================================================================================================
FENIMPlusInterface::~FENIMPlusInterface(void)
{}


//========================================================================================================================
void FENIMPlusInterface::runSequenceOfCommands(const std::string &treeLinkName)
{
	std::map<uint64_t,uint64_t> writeHistory;
	uint64_t writeAddress, writeValue, bitMask;
	uint8_t bitPosition;

	std::string writeBuffer;
	std::string readBuffer;
	char msg[1000];
	try
	{
		auto configSeqLink = theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode(treeLinkName);

		if(configSeqLink.isDisconnected())
			__COUT__ << "Disconnected configure sequence" << std::endl;
		else
		{
			__COUT__ << "Handling configure sequence." << std::endl;
			auto childrenMap = configSeqLink.getChildrenMap();
			for(const auto &child:childrenMap)
			{
				//WriteAddress and WriteValue fields

				writeAddress = child.second.getNode("WriteAddress").getValue<uint64_t>();
				writeValue = child.second.getNode("WriteValue").getValue<uint64_t>();
				bitPosition = child.second.getNode("StartingBitPosition").getValue<uint8_t>();
				bitMask = (1 << child.second.getNode("BitFieldSize").getValue<uint8_t>())-1;

				writeValue &= bitMask;
				writeValue <<= bitPosition;
				bitMask = ~(bitMask<<bitPosition);

				//place into write history
				if(writeHistory.find(writeAddress) == writeHistory.end())
					writeHistory[writeAddress] = 0;//init to 0

				writeHistory[writeAddress] &= bitMask; //clear incoming bits
				writeHistory[writeAddress] |= writeValue; //add incoming bits

				sprintf(msg,"\t Writing %s: \t %ld(0x%lX) \t %ld(0x%lX)", child.first.c_str(),
						writeAddress, writeAddress,
						writeHistory[writeAddress], writeHistory[writeAddress]);
				__COUT__ << msg << std::endl;

				writeBuffer.resize(0);
				OtsUDPFirmwareCore::writeAdvanced(writeBuffer, writeAddress, writeHistory[writeAddress]);
				OtsUDPHardware::write(writeBuffer);
				//				writeBuffer.resize(0);
				//				OtsUDPFirmwareCore::readAdvanced(writeBuffer, writeAddress);
				//				OtsUDPHardware::read(writeBuffer,readBuffer);
			}
		}
	}
	catch(const std::runtime_error &e)
	{
		__COUT__ << "Error accessing sequence, so giving up:\n" << e.what() << std::endl;
	}
	catch(...)
	{
		__COUT__ << "Unknown Error accessing sequence, so giving up." << std::endl;
	}
}

//========================================================================================================================
void FENIMPlusInterface::configure(void)
{
	__COUT__ << "configure" << std::endl;
	__COUT__ << "Clearing receive socket buffer: " << OtsUDPHardware::clearReadSocket() << " packets cleared." << std::endl;

	std::string writeBuffer;
	std::string readBuffer;

	__COUT__ << "Setting Destination IP: " <<
			theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode("StreamToIPAddress").getValue<std::string>()
			<< std::endl;
	__COUT__ << "And Destination Port: " <<
			theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode("StreamToPort").getValue<unsigned int>()
			<< std::endl;

	writeBuffer.resize(0);
	OtsUDPFirmwareCore::setDataDestination(writeBuffer,
			theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode("StreamToIPAddress").getValue<std::string>(),
			theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode("StreamToPort").getValue<uint64_t>()
	);
	OtsUDPHardware::write(writeBuffer);

	//
	//
	//LORE RIGH NOW I DONT CARE TO READ BACK
//	__COUT__ << "Reading back burst dest MAC/IP/Port: "  << std::endl;
//	writeBuffer.resize(0);
//	OtsUDPFirmwareCore::readAdvancedDataDestinationMAC(writeBuffer);
//	OtsUDPHardware::read(writeBuffer,readBuffer);
//	writeBuffer.resize(0);
//	OtsUDPFirmwareCore::readAdvancedDataDestinationIP(writeBuffer);
//	OtsUDPHardware::read(writeBuffer,readBuffer);
//	writeBuffer.resize(0);
//	OtsUDPFirmwareCore::readAdvancedDataDestinationPort(writeBuffer);
//	OtsUDPHardware::read(writeBuffer,readBuffer);
//
//	//read NIM+ version (for debugging)
//	writeBuffer.resize(0);
//	OtsUDPFirmwareCore::readAdvancedAdvanced(writeBuffer,0x5);
//	OtsUDPHardware::read(writeBuffer,readBuffer);


	ConfigurationTree optionalLink = theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode("LinkToOptionalParameters");
	bool usingOptionalParams =
			!optionalLink.isDisconnected();

	//choose external or internal clock
	__COUT__ << "Choosing external or internal clock..." << std::endl;
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x3,
			(usingOptionalParams?
					(optionalLink.getNode("UseExternalClock").getValue<bool>()?1:0):
					0)); //Choosing external := 1, internal := 0
	OtsUDPHardware::write(writeBuffer);


	////////////////////////////////////////////////////////////////////////////////
	//if clock reset is enabled reset clock
	{
		try
		{
			if(usingOptionalParams &&
					optionalLink.getNode("EnableClockResetDuringConfigure").getValue<bool>())
			{
				__COUT__ << "Resetting Ethernet!" << std::endl;

				OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ 0x1FFFFFFFF, /*data*/ 0x1); //ots Ethernet reset
				OtsUDPHardware::write(writeBuffer);

				OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x1FFFFFFFF,0x0); //unreset
				OtsUDPHardware::write(writeBuffer);
				sleep(5); //seconds
				

			}
		}
		catch(...)
		{
			__COUT__ << "Could not find reset clock flag, so not resetting... " << std::endl;
		}
	}

	__COUT__ << "Re-locking clocks..." << std::endl;
	//reset clock PLLs
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ 0x999, /*data*/ 0x7); //reset wiz0, wiz1, and nimDacClk
	OtsUDPHardware::write(writeBuffer);
	sleep(1); //seconds
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ 0x999, /*data*/ 0); //unreset
	OtsUDPHardware::write(writeBuffer);
	sleep(1); //seconds

	//FIXME -- read back clock lock status



	//Run Configure Sequence Commands
	//runSequenceOfCommands("LinkToConfigureSequence");

	//disable all 3 muxable trigger channels
	// always do this to avoid stray output triggers during configure
	if(1)
	{
		//addresses sig_norm and 2 veto channeling
		// write 3 to disable and reset

		writeBuffer.resize(0);
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ 0x4, /*data*/ 0x3); //disable sig norm
		OtsUDPHardware::write(writeBuffer);
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18016, 0x3); //disable cms1
		OtsUDPHardware::write(writeBuffer);
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18017, 0x3); //disable cms2
		OtsUDPHardware::write(writeBuffer);
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x5, 0x0);  //chA output mux to sig_norm
		OtsUDPHardware::write(writeBuffer);
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18013, 0x0);  //chB output mux to sig_norm
		OtsUDPHardware::write(writeBuffer);
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18014, 0x0);  //chC output mux to sig_norm
		OtsUDPHardware::write(writeBuffer);
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18015, 0x0);  //chD output mux to sig_norm
		OtsUDPHardware::write(writeBuffer);


		writeBuffer.resize(0);
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x1800C, 0xF); //setup output polarity
		OtsUDPHardware::write(writeBuffer);

		writeBuffer.resize(0);
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x6, 0x0); //disable AND gate selection logic
		OtsUDPHardware::write(writeBuffer);
	}

	//bitsets for enables and resets
	std::bitset<16> nimResets;
	std::bitset<16> nimEnables;

	//Reset everything for configure
	nimResets.set(); //set all bits to 1
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18000, nimResets.to_ulong()); //reset everything (counters and vetos/ps)
	OtsUDPHardware::write(writeBuffer);
	nimResets.reset(); //set all bits to 0
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18000, nimResets.to_ulong()); //unreset everything
	OtsUDPHardware::write(writeBuffer);


	std::array<std::string,4> channelNames({"ChannelA","ChannelB","ChannelC","ChannelD"});
	//set up DACs
	bool doWriteDACs = false;
	try 
	{
		doWriteDACs = usingOptionalParams &&
				optionalLink.getNode("EnableDACSetupDuringConfigure").getValue<bool>();
	}
	catch(...)
	{
		__COUT__ << "Skipping DAC writing because enable field was not found in tree." << std::endl;
	}

	if(doWriteDACs) //works, but temporarily disabling
	{
		__COUT__ << "Setting up DACs" << std::endl;

		//16 bit DAC value
		//   - 15:12 channel := 2=A, 6=B, A=C, E=D
		//   - 11:0 value  := 0-3.3V

		std::string dacValueField = "DACValue";
		unsigned char dacChannelAddress = 2;
		for(const auto &channelName : channelNames)
		{

			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ 0x1, /*data*/ 0x0);
			OtsUDPHardware::write(writeBuffer);
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ 0x1, /*data*/ 0x0);
			OtsUDPHardware::write(writeBuffer);

			unsigned short dacValue = optionalLink.getNode(dacValueField + channelName).getValue<unsigned short>();
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ 0x0, /*data*/ (dacChannelAddress << 12) | (dacValue & 0xFFF));
			OtsUDPHardware::write(writeBuffer);
			dacChannelAddress += 4;

			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ 0x1, /*data*/ 0x2);
			OtsUDPHardware::write(writeBuffer);
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ 0x1, /*data*/ 0x0);
			OtsUDPHardware::write(writeBuffer);
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ 0x1, /*data*/ 0x4);
			OtsUDPHardware::write(writeBuffer);
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ 0x1, /*data*/ 0x0);
			OtsUDPHardware::write(writeBuffer);
			//sleep(1); // give a little time to the slow DAC ASIC write
		}
	}


	//setup sig_mod channels, the input delay and width stages and sig_log, and other pre-sig_norm things
	try
	{
		unsigned char channelCount = 0;
		bool enableInput, invertPolarity;
		uint64_t inputModMask;
		unsigned int inputDelay;
		unsigned int inputWidth;
		
		
		unsigned char selectionOnOffMask = 0, inputPolarityMask = 0;

		__COUT__ << "Setting up input channels..." << std::endl;
		for(const auto &channelName : channelNames) //setup sig mod for each channel
		{
			//if(channelName != "ChannelD") { ++channelCount; continue;} //For Debugging just one channel

		  	enableInput = theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode("EnableInput" + channelName).getValue<bool>();
			
			if(usingOptionalParams)
			{
				inputDelay = optionalLink.getNode("DelayInput" + channelName).getValue<unsigned int>();
				inputWidth = optionalLink.getNode("WidthInput" + channelName).getValue<unsigned int>();
				inputModMask = (0xFFFFFFFFFFFFFFFF >> (64-inputWidth)) << inputDelay;
			}
			else
			{
				inputModMask = 0x7; // b111 default value
			}
			
			
			selectionOnOffMask |= ((enableInput?1:0) << channelCount);

			invertPolarity = usingOptionalParams && optionalLink.getNode("InvertPolarityInput" + channelName).getValue<bool>();

			inputPolarityMask |= ((invertPolarity?1:0) << channelCount);

			
			__COUT__ << "Output word for " << channelName << " is " << std::bitset<64>(inputModMask) << std::endl << " with a delay of " << inputDelay << " and a width of " << inputWidth << std::endl;
			
			
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/((channelCount+1) << 8) | 0x4, /*data*/ 0x3); //reset channel
			OtsUDPHardware::write(writeBuffer);
			
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, ((channelCount+1) << 8) | 0x2, inputModMask); //set sig_mod width and delay
			OtsUDPHardware::write(writeBuffer);

			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, ((channelCount+1) << 8) | 0x4, enableInput?0:1); //enable/disable channel
			OtsUDPHardware::write(writeBuffer);

			++channelCount;
		}
		__COUT__ << "Input polariy mask is " << std::bitset<8>(inputPolarityMask) << std::endl;
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/0x1800B, /*data*/ inputPolarityMask); //setup input polarity
		OtsUDPHardware::write(writeBuffer);


		__COUT__ << "Writing accelerator clock mask." << __E__;
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer,
				0x107,
				(usingOptionalParams?
						optionalLink.getNode("AcceleratorClockMask").getValue<unsigned int>():
						0)); //chooses a 40MHz clock phase relative to the accelerator clock (in increments of ~3ns)
		OtsUDPHardware::write(writeBuffer);

		__COUT__ << "Writing trigger clock mask." << __E__;
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer,
				0x18008,
				(1<<8) |  //disable sig_log masking with 40MHz clock block
				(usingOptionalParams?
						optionalLink.getNode("TriggerClockMask").getValue<unsigned int>():
						0)); //chooses a section of 40MHz clock
		OtsUDPHardware::write(writeBuffer);

		// 40Mhz Clock Stuff - Update to reflect firmware changes
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18000, 0x40); //resets section of 40MHz clock block
		OtsUDPHardware::write(writeBuffer);


		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18000, 0x0); //enables a section of 40MHz clock block
		OtsUDPHardware::write(writeBuffer);



	}
	catch(const std::runtime_error &e)
	{
		__COUT__ << "Failed input stage setup!\n" << e.what() << std::endl;
		throw;
	}


	//setup output stage
	try
	{
		unsigned char channelCount = 0;
		bool enableOutput;
		unsigned int outputDelay;
		unsigned int outputWidth;
		uint64_t outputModMask;

		unsigned int outputMuxSelect;
		unsigned int outputChannelSourceSelect;
		unsigned int outputTimeVetoDuration, outputPrescaleCount;
		bool outputBackpressureSelect;
		unsigned char backpressureMask = 0;
		unsigned int gateChannelVetoSel[3] = {0,0,0};
		
		__COUT__ << "Setting up output channels..." << std::endl;
		//there are 3 output channels (alias: signorm, sigcms1, sigcms2)
		std::array<std::string,3> outChannelNames = {"Channel0","Channel1","Channel2"};
		for(const auto &channelName : outChannelNames)
		{
			outputChannelSourceSelect = theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode(
					"OutputSourceSelect" + channelName).getValue<unsigned int>(); //0: sig_log   or    1: sig_norm/ch0
			__COUT__ << "OutputSourceSelect for " << channelName << " is " << outputChannelSourceSelect << std::endl;
			if(outputChannelSourceSelect) //if non-default, subtract 1 so choice 1 evaluates to 0, and so on..
				--outputChannelSourceSelect;
			
			if(usingOptionalParams)
			{
				outputDelay = optionalLink.getNode("DelayOutput" + channelName).getValue<unsigned int>();
				outputWidth = optionalLink.getNode("WidthOutput" + channelName).getValue<unsigned int>();
				outputModMask = (0xFFFFFFFFFFFFFFFF >> (64-outputWidth)) << outputDelay;
				outputTimeVetoDuration = optionalLink.getNode("OutputTimeVetoDuration" + channelName).getValue<unsigned int>(); //0 ignores time veto, units of 3ns
				outputPrescaleCount = optionalLink.getNode("OutputPrescaleCount" + channelName).getValue<unsigned int>();
				outputBackpressureSelect = optionalLink.getNode("OutputBackpressureSelect" + channelName).getValue<bool>();
				gateChannelVetoSel[channelCount] = optionalLink.getNode("InputChannelVetoSourceForOutput" + channelName).getValue<int>();
				__COUT__ << "Raw gateChannelVetoSelect for " << channelName << " is " << gateChannelVetoSel[channelCount] << std::endl;
				//0/1 := No Veto, 2-5 := Input_A-D		
			
			}
			else //defaults
			{
				outputModMask = 0xFFF;
				outputTimeVetoDuration = 0;
				outputPrescaleCount = 0;
				outputBackpressureSelect = false;
			}

			if(gateChannelVetoSel[channelCount] <= 1)
				gateChannelVetoSel[channelCount] = 4; //Ground on mux
			else
				gateChannelVetoSel[channelCount] -= 2; //0-3 on mux is chA-D

			backpressureMask |= (outputBackpressureSelect?1:0) << channelCount;

			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, channelCount==0?0x4:(0x18016 + channelCount - 1), 0x33); //reset output channel block (bits 4/5 are reseting ch1/2)
			OtsUDPHardware::write(writeBuffer);
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, channelCount==0?0x2:(0x18002 + channelCount - 1), outputModMask); //set output channel width/delay mask
			OtsUDPHardware::write(writeBuffer);
			
			__COUT__ << "Output word for " << channelName << " is " << std::bitset<64>(outputModMask) << std::endl << " with a delay of " << outputDelay << " and a width of " << outputWidth << std::endl;
			
			if(channelCount)
			{
				writeBuffer.resize(0);
				OtsUDPFirmwareCore::writeAdvanced(writeBuffer, (0x18018 + channelCount - 1), outputChannelSourceSelect); //select source (1 := signorm, 0 := siglog)
				OtsUDPHardware::write(writeBuffer);
				__COUT__ << "Output src select is " << outputChannelSourceSelect << " for " << channelName << std::endl;
			}
			

			
			//time veto setup
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, channelCount==0?0x1801B:(0x18011 + channelCount - 1), outputTimeVetoDuration);
			OtsUDPHardware::write(writeBuffer);

			__COUT__ << "Veto count for " << channelName << " is " << outputTimeVetoDuration << " writing to ch "  << (channelCount==0?0x1801B:(0x18011 + channelCount - 1)) << std::endl;
			
			//prescale veto setup
						writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x1801C + channelCount, 0); //Set to 0, then set to value
			OtsUDPHardware::write(writeBuffer);
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x1801C + channelCount, outputPrescaleCount);
			OtsUDPHardware::write(writeBuffer);

			__COUT__ << "Prescaler count for " << channelName << " is " << outputPrescaleCount << " writing to ch " <<  0x1801C + channelCount << std::endl;
			  
			++channelCount;
		}


		//backpressure select
		// bit 0, 1, 2 mean apply backpressure to that output channel
		//  2 external backpressure inputs
		//  bit 3 is 0/1 disable/enable for first input
		//  bit 4 is 0/1 disable/enable for second input
		__COUT__ << "Backpressure Selecting..." << std::endl;
		outputBackpressureSelect = usingOptionalParams && optionalLink.getNode("EnableBackPressureInputA").getValue<bool>();
		backpressureMask |= outputBackpressureSelect << 3;
		outputBackpressureSelect = usingOptionalParams && optionalLink.getNode("EnableBackPressureInputB").getValue<bool>();
		backpressureMask |= outputBackpressureSelect << 4;
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x1801A, backpressureMask);
		OtsUDPHardware::write(writeBuffer);

		//and 4 output muxes (first is special)
		__COUT__ << "Setting output muxes..." << std::endl;
		unsigned int outputPolarityMask = 0; 
		bool outputInvertPolarity;
		channelCount = 0;
		for(const auto &channelName : channelNames)
		{
			outputMuxSelect = theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode(
					"OutputMuxSelect" + channelName).getValue<unsigned int>();
			if(outputMuxSelect) --outputMuxSelect; //default is 0, the actual selection address for all other choices is 1 higher

			if(outputMuxSelect > 31) {__SS__; throw std::runtime_error(ss.str() +
					"Invalid output mux select!");}

			if(usingOptionalParams)
			{
			  outputInvertPolarity = usingOptionalParams && optionalLink.getNode("InvertPolarityOutput" + channelName).getValue<bool>();
			  outputPolarityMask |= ((outputInvertPolarity?1:0) << channelCount);
			}
			else {
			  outputPolarityMask = 0xF;
			}
			
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, channelCount == 0?0x5:(0x18013 + channelCount - 1), outputMuxSelect); //setup mux select
			OtsUDPHardware::write(writeBuffer);
			__COUT__ << "Mux value for output channel " << channelName << " is " <<
					outputMuxSelect << ", written to 0x" << std::hex <<
					(channelCount == 0?0x5:(0x18013 + channelCount - 1)) <<
					std::dec << std::endl;
						
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/0x1800C, /*data*/ outputPolarityMask); //setup output polarity
			OtsUDPHardware::write(writeBuffer);
			__COUT__ << "Input polarity mask is " << std::bitset<8>(outputPolarityMask) << std::endl;

			++channelCount;
		}

		//setup burst data blocks
		{
			__COUT__ << "Setting up Burst Data Blocks" << std::endl;

			unsigned int logicSampleDelay = 0;
			unsigned int gateChannel = 0;
			unsigned int gateChannelReg = (gateChannelVetoSel[2]<<8) | (gateChannelVetoSel[1]<<4) | (gateChannelVetoSel[0]<<0); //nibbles ... 3:= delta-time, 2:= out-ch2, 1:= out-ch1, 0 := out-ch0
			__COUT__ << "Gate Ch Veto Selections - 2: " << gateChannelVetoSel[2] << std::endl;
			__COUT__ << "Gate Ch Veto Selections - 1: " << gateChannelVetoSel[1] << std::endl;
			__COUT__ << "Gate Ch Veto Selections - 0: " << gateChannelVetoSel[0] << std::endl;
			//value of 4 is no-gate
				// 0-3 are input channels A-D depending on polarity


			if(usingOptionalParams)
			{
				outputMuxSelect = optionalLink.getNode("BurstDataMuxSelect").getValue<unsigned int>();
				logicSampleDelay = optionalLink.getNode("BurstDataLogicSampleDelay").getValue<unsigned int>();
				gateChannel = optionalLink.getNode("BurstDataGateInputChannel").getValue<unsigned int>();
			}
			else
				outputMuxSelect = 0;

			if(outputMuxSelect) //if non-default, subtract 1 so choice 1 evaluates to 0, and so on..
				--outputMuxSelect;

			if(gateChannel > 1) //if non-default, subtract 1 so choice 1 evaluates to 0, and so on..
			{
				gateChannel -= 2; //to give range 0 to 3
				gateChannelReg |= gateChannel<<12;
			}
			else //default is no gate
			{
				gateChannelReg |= 4<<12;
			}
			__COUT__ << "Gate Ch Veto Selections - Burst: " << gateChannel << std::endl;
			std::bitset<16> gateChannelRegBitset (gateChannelReg);
			__COUT__ << "Gate Ch Veto Register: " << gateChannelReg << std::endl;			
			__COUT__ << "Gate Ch Veto Register: " << gateChannelRegBitset.to_string() << std::endl;
			

			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x1800E, outputMuxSelect); //setup burst output mux select
			OtsUDPHardware::write(writeBuffer);

			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18010, logicSampleDelay); //setup burst logic sample delay
			OtsUDPHardware::write(writeBuffer);

			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18004, gateChannelReg); //setup burst block gate signal choice
			OtsUDPHardware::write(writeBuffer);
		}
		
		//selection logic setup
		unsigned int coincidenceLogicWord = theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode("CoincidenceLogicWord").getValue<unsigned int>();

		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x06, 0x01); //reset selection logic
		OtsUDPHardware::write(writeBuffer);

		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x06, 0x00); //disable selection logic, take out of reset
		OtsUDPHardware::write(writeBuffer);

		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x07, coincidenceLogicWord); //setup selection logic
		OtsUDPHardware::write(writeBuffer);

		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x06, 0x02); //renable selection  logic
		OtsUDPHardware::write(writeBuffer);
		__COUT__ << "Selection Logic word is  " << std::bitset<16>(coincidenceLogicWord) << std::endl;
		
		 
		
		unsigned int sigGenCount = optionalLink.getNode("SignalGeneratorPulseCount").getValue<unsigned int>();
		unsigned int sigGenHighPer = optionalLink.getNode("SignalGeneratorHighPeriod").getValue<unsigned int>();
		unsigned int sigGenLowPer = optionalLink.getNode("SignalGeneratorLowPeriod").getValue<unsigned int>();
		bool sigGenPolarity = optionalLink.getNode("SignalGeneratorInvertPolarity").getValue<bool>();
		unsigned int sigGenPolarityMask = (sigGenPolarity?1:0);
		
		
		
		if (optionalLink.getNode("SignalGeneratorEnable").getValue<bool>())
		{
			nimResets.reset(5); //set bit 5 in resets to 0 to take sig gen out of reset
			nimEnables.set(5); //set bit 5 in enables to 1 to enable sig gen

			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18000, 0xFFFF); //reset all (is this safe to do?)
			OtsUDPHardware::write(writeBuffer);
			__COUT__ << "Resets all for sig gen!" << std::endl;

			//signal generator setup
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18005, sigGenCount); //sig gen pulse count
			OtsUDPHardware::write(writeBuffer);
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18006, sigGenHighPer); //sig gen high per
			OtsUDPHardware::write(writeBuffer);
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18007, sigGenLowPer); //sig gen low per
			OtsUDPHardware::write(writeBuffer);
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x1800D, sigGenPolarityMask); //sig gen polarity
			OtsUDPHardware::write(writeBuffer);

			__COUT__ << "Configured signal generator with a count of " << sigGenCount << " (0 is continuous output), a high period of " <<
					sigGenHighPer << ", a low period of " << sigGenLowPer << ", and output inversion set to " << sigGenPolarity << std::endl;
		}
		else
		{
			nimResets.set(5); //set bit 5 in resets to 1 to take sig gen out of reset
			nimEnables.reset(5); //set bit 5 in enables to 0 to disable sig gen
			__COUT__ << "Signal Generator disabled" << std::endl;
		}

		writeBuffer.resize(0);
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18000, nimResets.to_ulong()); //set sig gen in or out of reset
		OtsUDPHardware::write(writeBuffer);
		__COUT__ << "Nim Resets set to " << nimResets << std::endl;

		writeBuffer.resize(0);
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18001, nimEnables.to_ulong()); //enable or disable sig gen
		OtsUDPHardware::write(writeBuffer);
		__COUT__ << "Nim Enables set to " << nimEnables << std::endl;
		
		
		
	}
	catch(const std::runtime_error &e)
	{
		__COUT__ << "Failed output stage setup!\n" << e.what() << std::endl;
		throw;
	}


	//now that configure done, save sel_ctl_register_ for later
	OtsUDPFirmwareCore::readAdvanced(writeBuffer,
			10 /*address*/); //read back sig log
	OtsUDPHardware::read(writeBuffer,sel_ctl_register_);

	__COUT__ << "receiveQuadWord all = 0x" << std::hex <<
			sel_ctl_register_ << std::dec << std::endl;

	sel_ctl_register_ = ((sel_ctl_register_>>(5*8))&0x0FF);

	__COUT__ << "sel_ctl_register_ = 0x" << std::hex <<
			sel_ctl_register_ << std::dec << std::endl;



	//at this point sig_log should be active (for chipscope, and recognizing of trigger input active)


	__COUT__ << "Done with configuring."  << std::endl;
}

//========================================================================================================================
//void FENIMPlusInterface::configureDetector(const DACStream& theDACStream)
//{
//	__COUT__ << "\tconfigureDetector" << std::endl;
//}

//========================================================================================================================
void FENIMPlusInterface::halt(void)
{
	__COUT__ << "\tHalt" << std::endl;
	stop();
}

//========================================================================================================================
void FENIMPlusInterface::pause(void)
{
	__COUT__ << "\tPause" << std::endl;
	stop();
}

//========================================================================================================================
void FENIMPlusInterface::resume(void)
{
	__COUT__ << "\tResume" << std::endl;
	start("");
}

//========================================================================================================================
void FENIMPlusInterface::start(std::string runNumber)
{
	runNumber_ = runNumber;
	__COUT__ << "\tStart " << runNumber_ << std::endl;
	    std::string writeBuffer;

	//Run Start Sequence Commands
	//runSequenceOfCommands("LinkToStartSequence");


	ConfigurationTree optionalLink = theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode("LinkToOptionalParameters");
	bool usingOptionalParams =
			!optionalLink.isDisconnected();

	if(usingOptionalParams && optionalLink.getNode("EnableBurstData").getValue<bool>())
	{
		__COUT__ << "Enabling burst mode!" << __E__;
		OtsUDPFirmwareCore::startBurst(writeBuffer);
		OtsUDPHardware::write(writeBuffer);
	}


	//enable nim plus burst data
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ 0x1801F, /*data*/0x6);
	OtsUDPHardware::write(writeBuffer);
}

//========================================================================================================================
void FENIMPlusInterface::stop(void)
{
	std::string writeBuffer;
	//immediately stop triggers (by disabling sig log)
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer,
			0x6 /*address*/,
			(sel_ctl_register_) & (~(1<<1))); //disable sig mod block
	OtsUDPHardware::write(writeBuffer);



	__COUT__ << "\tStop" << std::endl;



	//Run Stop Sequence Commands

	//runSequenceOfCommands("LinkToStopSequence");
	
	//attempt to stop burst always
	OtsUDPFirmwareCore::stopBurst(writeBuffer);
	OtsUDPHardware::write(writeBuffer);


	ConfigurationTree optionalLink = theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode("LinkToOptionalParameters");
	if(!optionalLink.isDisconnected())
	{



		std::string filename = //theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode(
				optionalLink.getNode("TriggerCountAtRunStopFilename").getValue<std::string>();

		if(filename != "DEFAULT" && filename != "")
		{

			std::string filename = optionalLink.getNode(
					"TriggerCountAtRunStopFilename").getValue<std::string>();

			if(filename != "DEFAULT" && filename != "")
			{
				filename +=	"_" + runNumber_ + ".cnt";

				__COUT__ << "Attempting to save counts to " << filename << __E__;
				FILE *fp = fopen(//("/data/TestBeam/2017_12_December/NimPlus/TriggerCount_" +
						//runNumber_ + ".cnt").c_str()
						filename.c_str()
						,"w");
				if(fp)
				{
					__COUT__ << "Saving counts to " << filename << __E__;
					//std::string readBuffer;
					uint64_t readQuadWord;
					uint32_t count;
					uint8_t tag;

					OtsUDPFirmwareCore::readAdvanced(writeBuffer,0x102);
					OtsUDPHardware::read(writeBuffer,readQuadWord);

					count = (readQuadWord >> 32);
					tag = count>>28; //top 4 bits
					count = (count & 0x0FFFFFFF); //only 28 bits
					__COUT__ << "sig_log count = " << count << __E__;
					fprintf(fp,"sig_log   \t [tag=%d] %d 0x%4.4X\n",tag,count,count);

					count = (readQuadWord & 0x0FFFFFFFF);
					tag = count>>28; //top 4 bits
					count = (count & 0x0FFFFFFF); //only 28 bits
					__COUT__ << "sig_norm(out0) count = " << count << __E__;
					fprintf(fp,"sig_norm(out0) \t [tag=%d] %d 0x%4.4X\n",tag,count,count);


					OtsUDPFirmwareCore::readAdvanced(writeBuffer,0x100);
					OtsUDPHardware::read(writeBuffer,readQuadWord);

					count = (readQuadWord & 0x0FFFFFFFF);
					tag = count>>28; //top 4 bits
					count = (count & 0x0FFFFFFF); //only 28 bits
					__COUT__ << "sig_cms1(out1) count = " << count << __E__;
					fprintf(fp,"sig_cms1(out1) \t [tag=%d] %d 0x%4.4X\n",tag,count,count);

					count = (readQuadWord >> 32);
					tag = count>>28; //top 4 bits
					count = (count & 0x0FFFFFFF); //only 28 bits
					__COUT__ << "sig_cms2(out2) count = " << count << __E__;
					fprintf(fp,"sig_cms2(out2) \t [tag=%d] %d 0x%4.4X\n",tag,count,count);


					OtsUDPFirmwareCore::readAdvanced(writeBuffer,0x105);
					OtsUDPHardware::read(writeBuffer,readQuadWord);

					count = (readQuadWord & 0x0FFFFFFFF);
					tag = count>>28; //top 4 bits
					count = (count & 0x0FFFFFFF); //only 28 bits
					__COUT__ << "muxout-A count = " << count << __E__;
					fprintf(fp,"muxout-A \t [tag=%d] %d 0x%4.4X\n",tag,count,count);

					count = (readQuadWord >> 32);
					tag = count>>28; //top 4 bits
					count = (count & 0x0FFFFFFF); //only 28 bits
					__COUT__ << "muxout-B count = " << count << __E__;
					fprintf(fp,"muxout-B \t [tag=%d] %d 0x%4.4X\n",tag,count,count);

					OtsUDPFirmwareCore::readAdvanced(writeBuffer,0x106);
					OtsUDPHardware::read(writeBuffer,readQuadWord);

					count = (readQuadWord & 0x0FFFFFFFF);
					tag = count>>28; //top 4 bits
					count = (count & 0x0FFFFFFF); //only 28 bits
					__COUT__ << "muxout-C count = " << count << __E__;
					fprintf(fp,"muxout-C \t [tag=%d] %d 0x%4.4X\n",tag,count,count);

					count = (readQuadWord >> 32);
					tag = count>>28; //top 4 bits
					count = (count & 0x0FFFFFFF); //only 28 bits
					__COUT__ << "muxout-D count = " << count << __E__;
					fprintf(fp,"muxout-D \t [tag=%d] %d 0x%4.4X\n",tag,count,count);



					fclose(fp);
				}
			}
		}
	}


	//there are 3 output channels (alias: signorm, sigcms1, sigcms2)

	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ 0x4, /*data*/0x33);//only reset signorm  0x33); //reset output channel blocks synchronously
	OtsUDPHardware::write(writeBuffer);


}

//========================================================================================================================
bool FENIMPlusInterface::running(void)
{
	std::string writeBuffer;


	__COUT__ << "Disabling sig_log" << std::endl;

	OtsUDPFirmwareCore::writeAdvanced(writeBuffer,
			0x6 /*address*/,
			(sel_ctl_register_) & (~(1<<1))); //disable sig mod block
	OtsUDPHardware::write(writeBuffer);


	__COUT__ << "Resetting all counters (including sig log)" << std::endl;
	//0x18000 ==> counter resets

	OtsUDPFirmwareCore::writeAdvanced(writeBuffer,
			0x18000 /*address*/,
			(-1)&(~(1<<6))/*data*/ ); //reset sig_log and sig_norm/cms1/cms2 counters (just not bit 6 which is acc_sync block reset)
	OtsUDPHardware::write(writeBuffer);

	OtsUDPFirmwareCore::writeAdvanced(writeBuffer,
			0x18000 /*address*/,
			0 /*data*/ ); //unreset sig_log and sig_norm/cms1/cms2 counters (just not bit 6 which is acc_sync block reset)
	OtsUDPHardware::write(writeBuffer);



	////////////////////////////////
	////////////////////////////////
	// long sleep so trigger numbers match
	//sleep(22);
	//sleep(1);



	__COUT__ << "Running" << std::endl;

	//		//example!
	//		//play with array of 8 LEDs at address 0x1003

	ConfigurationTree optionalLink = theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode("LinkToOptionalParameters");
	bool usingOptionalParams =
			!optionalLink.isDisconnected();

	// 0x0/0x8 to 0x4 to use edge detection
	try
	{
		unsigned int sleepSeconds = 22;
		if(usingOptionalParams)
		{
			try
			{
				sleepSeconds = optionalLink.getNode("SecondsDelayBeforeStartingTriggers").getValue<unsigned int>();
			}
			catch(...)
			{
				__COUT__ << "Ingore missing SecondsDelayBeforeStartingTriggers field..." << __E__;
			}
		}

		if(!sleepSeconds) sleepSeconds = 22;
		__COUT__ << "Sleeping for " << sleepSeconds << " seconds..." << __E__;
		sleep(sleepSeconds);

		unsigned char channelCount = 0;
		bool enable40MHzMask;
		unsigned int gateChannelVetoSel;

		//there are 3 output channels (alias: signorm, sigcms1, sigcms2)
		std::array<std::string,3> outChannelNames = {"Channel0","Channel1","Channel2"};

		__COUT__ << "Enabling output trigger channels!" << std::endl;

		//must do channel 0 last!! (synchronously enables all 3 channels)
		for(channelCount = 2; channelCount <= 2; --channelCount)
		{
			enable40MHzMask = usingOptionalParams && optionalLink.getNode("EnableClockMask" +
					outChannelNames[channelCount]).getValue<bool>();
			gateChannelVetoSel = usingOptionalParams?
					optionalLink.getNode("InputChannelVetoSourceForOutput" + outChannelNames[channelCount]).getValue<int>():
					0;

			OtsUDPFirmwareCore::writeAdvanced(writeBuffer,
					 channelCount==0?0x4:(0x18016 + channelCount - 1) /*address*/,
					(enable40MHzMask?0x0:0x8) | (gateChannelVetoSel <= 1?0:(1<<2))/*data*/ ); //unreset output channel block
			OtsUDPHardware::write(writeBuffer);
		}

		__COUT__ << "Enabling sig mod block!" << __E__;
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer,
				0x6 /*address*/,
				sel_ctl_register_); //enable sig mod block and restore original register value
		OtsUDPHardware::write(writeBuffer);


	}
	catch(const std::runtime_error &e)
	{
		__SS__ << "Failed start setup!\n" << e.what() << std::endl;
		__COUT_ERR__ << ss.str();
		throw std::runtime_error(ss.str());
	}

	return false;
}

//========================================================================================================================
//NOTE: buffer for address must be at least size universalAddressSize_
//NOTE: buffer for returnValue must be max UDP size to handle return possibility
int ots::FENIMPlusInterface::universalRead(char *address, char *returnValue)
{
	__COUT__ << "address size " << universalAddressSize_ << std::endl;

	__COUT__ << "Request: ";
	for(unsigned int i=0;i<universalAddressSize_;++i)
		printf("%2.2X",(unsigned char)address[i]);
	std::cout << std::endl;

	std::string readBuffer, sendBuffer;
	OtsUDPFirmwareCore::readAdvanced(sendBuffer,address,1 /*size*/);

	//OtsUDPHardware::read(FSSRFirmware::universalRead(address), readBuffer) < 0;
	try
	{
		OtsUDPHardware::read(sendBuffer, readBuffer); // data reply
	}
	catch(std::runtime_error &e)
	{
		__COUT__ << "Caught it! This is when it's getting time out error" << std::endl;
		__COUT_ERR__ << e.what() << std::endl;
		return -1;
	}

	__COUT__ << "Result SIZE: " << readBuffer.size() << std::endl;
	std::memcpy(returnValue,readBuffer.substr(2).c_str(),universalDataSize_);
	return 0;
}

//========================================================================================================================
//NOTE: buffer for address must be at least size universalAddressSize_
//NOTE: buffer for writeValue must be at least size universalDataSize_
void ots::FENIMPlusInterface::universalWrite(char* address, char* writeValue)
{
	__COUT__ << "address size " << universalAddressSize_ << std::endl;
	__COUT__ << "data size " << universalDataSize_ << std::endl;
	__COUT__ << "Sending: ";
	for(unsigned int i=0;i<universalAddressSize_;++i)
		printf("%2.2X",(unsigned char)address[i]);
	std::cout << std::endl;

	std::string sendBuffer;
	OtsUDPFirmwareCore::writeAdvanced(sendBuffer,address,writeValue,1 /*size*/);
	OtsUDPHardware::write(sendBuffer); // data request
}

DEFINE_OTS_INTERFACE(FENIMPlusInterface)
