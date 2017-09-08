#include "otsdaq-prepmodernization/FEInterfaces/FENIMPlusInterface.h"
#include "otsdaq-core/MessageFacility/MessageFacility.h"
#include "otsdaq-core/Macros/CoutHeaderMacros.h"
#include "otsdaq-core/Macros/InterfacePluginMacros.h"
#include <iostream>
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
//    __MOUT__ << __PRETTY_FUNCTION__ << "Few name: " << name
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
, OtsUDPHardware    (theXDAQContextConfigTree.getNode(interfaceConfigurationPath).getNode("InterfaceIPAddress").getValue<std::string>()
		, theXDAQContextConfigTree.getNode(interfaceConfigurationPath).getNode("InterfacePort").getValue<unsigned int>())
, OtsUDPFirmwareDataGen(theXDAQContextConfigTree.getNode(interfaceConfigurationPath).getNode("FirmwareVersion").getValue<unsigned int>())
{
	//    __MOUT__ << "FE name: " << interfaceUID << std::endl;
	//    __MOUT__ << " Interface IP: "   << FEVInterface::theXDAQContextConfigTree_.getNode(interfaceConfigurationPath).getNode("IPAddress").getValue<std::string>() << std::endl;
	//    __MOUT__ << " Interface Port: " << FEVInterface::theXDAQContextConfigTree_.getNode(interfaceConfigurationPath).getNode("Port").getValue<std::string>() << std::endl;
	//    __MOUT__ << " IP: "             << FEVInterface::theXDAQContextConfigTree_.getNode(interfaceConfigurationPath).getNode("IP").getValue<std::string>() << std::endl;
	//    __MOUT__ << " Port: "           << FEVInterface::theXDAQContextConfigTree_.getNode(interfaceConfigurationPath).getNode("IPAddress").getValue<std::string>() << std::endl;
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
			__MOUT__ << "Disconnected configure sequence" << std::endl;
		else
		{
			__MOUT__ << "Handling configure sequence." << std::endl;
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
				__MOUT__ << msg << std::endl;

				writeBuffer.resize(0);
				OtsUDPFirmwareCore::write(writeBuffer, writeAddress, writeHistory[writeAddress]);
				OtsUDPHardware::write(writeBuffer);
				//				writeBuffer.resize(0);
				//				OtsUDPFirmwareCore::read(writeBuffer, writeAddress);
				//				OtsUDPHardware::read(writeBuffer,readBuffer);
			}
		}
	}
	catch(const std::runtime_error &e)
	{
		__MOUT__ << "Error accessing sequence, so giving up:\n" << e.what() << std::endl;
	}
	catch(...)
	{
		__MOUT__ << "Unknown Error accessing sequence, so giving up." << std::endl;
	}
}

//========================================================================================================================
void FENIMPlusInterface::configure(void)
{
	__MOUT__ << "configure" << std::endl;
	__MOUT__ << "Clearing receive socket buffer: " << OtsUDPHardware::clearReadSocket() << " packets cleared." << std::endl;

	std::string writeBuffer;
	std::string readBuffer;

	__MOUT__ << "Setting Destination IP: " <<
			theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode("StreamToIPAddress").getValue<std::string>()
			<< std::endl;
	__MOUT__ << "And Destination Port: " <<
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
	__MOUT__ << "Reading back burst dest MAC/IP/Port: "  << std::endl;
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::readDataDestinationMAC(writeBuffer);
	OtsUDPHardware::read(writeBuffer,readBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::readDataDestinationIP(writeBuffer);
	OtsUDPHardware::read(writeBuffer,readBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::readDataDestinationPort(writeBuffer);
	OtsUDPHardware::read(writeBuffer,readBuffer);

	//read NIM+ version (for debugging)
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::read(writeBuffer,0x5);
	OtsUDPHardware::read(writeBuffer,readBuffer);


	ConfigurationTree optionalLink = theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode("LinkToOptionalParameters");
	bool usingOptionalParams =
			!optionalLink.isDisconnected();

	////////////////////////////////////////////////////////////////////////////////
	//if clock reset is enabled reset clock
	{
		try
		{
			if(usingOptionalParams &&
					optionalLink.getNode("theXDAQContextConfigTree_.getNode(theConfigurationPath_)EnableClockResetDuringConfigure").getValue<bool>())
			{
				__MOUT__ << "Resetting clocks!" << std::endl;
				writeBuffer.resize(0);
				OtsUDPFirmwareCore::write(writeBuffer, /*address*/ 0x1FFFFFFFF, /*data*/ 0x1); //ots Ethernet reset
				OtsUDPHardware::write(writeBuffer);
				writeBuffer.resize(0);
				OtsUDPFirmwareCore::write(writeBuffer, 0x1FFFFFFFF,0x0);
				OtsUDPHardware::write(writeBuffer);
				sleep(5); //seconds
				
				writeBuffer.resize(0);
				OtsUDPFirmwareCore::write(writeBuffer, 0x3,0x0); //Choosing internal := 0, external := 1
				OtsUDPHardware::write(writeBuffer);
				sleep(1); //seconds
			}
		}
		catch(...)
		{
			__MOUT__ << "Could not find reset clock flag, so not resetting... " << std::endl;
		}
	}



	//Run Configure Sequence Commands
	//runSequenceOfCommands("LinkToConfigureSequence");

	//disable all 3 muxable trigger channels
	// always do this to avoid stray output triggers during configure
	if(1)
	{
		//addresses sig_norm and 2 veto channeling
		// write 3 to disable and reset

		writeBuffer.resize(0);
		OtsUDPFirmwareCore::write(writeBuffer, /*address*/ 0x4, /*data*/ 0x3); //disable sig norm
		OtsUDPHardware::write(writeBuffer);
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::write(writeBuffer, 0x18016, 0x3); //disable cms1
		OtsUDPHardware::write(writeBuffer);
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::write(writeBuffer, 0x18017, 0x3); //disable cms2
		OtsUDPHardware::write(writeBuffer);
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::write(writeBuffer, 0x5, 0x0);  //chA output mux to sig_norm
		OtsUDPHardware::write(writeBuffer);
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::write(writeBuffer, 0x18013, 0x0);  //chB output mux to sig_norm
		OtsUDPHardware::write(writeBuffer);
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::write(writeBuffer, 0x18014, 0x0);  //chC output mux to sig_norm
		OtsUDPHardware::write(writeBuffer);
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::write(writeBuffer, 0x18015, 0x0);  //chD output mux to sig_norm
		OtsUDPHardware::write(writeBuffer);


		writeBuffer.resize(0);
		OtsUDPFirmwareCore::write(writeBuffer, 0x1800C, 0xF); //setup output polarity
		OtsUDPHardware::write(writeBuffer);

		writeBuffer.resize(0);
		OtsUDPFirmwareCore::write(writeBuffer, 0x6, 0x0); //disable AND gate selection logic
		OtsUDPHardware::write(writeBuffer);
	}




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
		__MOUT__ << "Skipping DAC writing because enable field was not found in tree." << std::endl;
	}

	if(doWriteDACs) //works, but temporarily disabling
	{
		__MOUT__ << "Setting up DACs" << std::endl;

		//16 bit DAC value
		//   - 15:12 channel := 2=A, 6=B, A=C, E=D
		//   - 11:0 value  := 0-3.3V

		std::string dacValueField = "DACValue";
		unsigned char dacChannelAddress = 2;
		for(const auto &channelName : channelNames)
		{

			writeBuffer.resize(0);
			OtsUDPFirmwareCore::write(writeBuffer, /*address*/ 0x1, /*data*/ 0x0);
			OtsUDPHardware::write(writeBuffer);
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::write(writeBuffer, /*address*/ 0x1, /*data*/ 0x0);
			OtsUDPHardware::write(writeBuffer);

			unsigned short dacValue = optionalLink.getNode(dacValueField + channelName).getValue<unsigned short>();
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::write(writeBuffer, /*address*/ 0x0, /*data*/ (dacChannelAddress << 12) | (dacValue & 0xFFF));
			OtsUDPHardware::write(writeBuffer);
			dacChannelAddress += 4;

			writeBuffer.resize(0);
			OtsUDPFirmwareCore::write(writeBuffer, /*address*/ 0x1, /*data*/ 0x2);
			OtsUDPHardware::write(writeBuffer);
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::write(writeBuffer, /*address*/ 0x1, /*data*/ 0x0);
			OtsUDPHardware::write(writeBuffer);
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::write(writeBuffer, /*address*/ 0x1, /*data*/ 0x4);
			OtsUDPHardware::write(writeBuffer);
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::write(writeBuffer, /*address*/ 0x1, /*data*/ 0x0);
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

		__MOUT__ << "Setting up input channels..." << std::endl;
		for(const auto &channelName : channelNames) //setup sig mod for each channel
		{
			//if(channelName != "ChannelD") { ++channelCount; continue;} //For Debugging just one channel

		  	enableInput = theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode("EnableInput" + channelName).getValue<bool>();
			
			if(usingOptionalParams){
				inputDelay = optionalLink.getNode("DelayInput" + channelName).getValue<unsigned int>();
				inputWidth = optionalLink.getNode("WidthInput" + channelName).getValue<unsigned int>();
				inputModMask = (0xFFFFFFFFFFFFFFFF >> (64-inputWidth)) << inputDelay;
			}
			else{
				inputModMask = 0x7; // b111 default value
			}
			
			
			selectionOnOffMask |= ((enableInput?1:0) << channelCount);

			invertPolarity = usingOptionalParams && optionalLink.getNode("InvertPolarityInput" + channelName).getValue<bool>();

			inputPolarityMask |= ((invertPolarity?1:0) << channelCount);

			
			__MOUT__ << "Output word for " << channelName << " is " << std::bitset<64>(inputModMask) << std::endl << " with a delay of " << inputDelay << " and a width of " << inputWidth << std::endl;
			
			
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::write(writeBuffer, /*address*/((channelCount+1) << 8) | 0x4, /*data*/ 0x3); //reset channel
			OtsUDPHardware::write(writeBuffer);
			
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::write(writeBuffer, ((channelCount+1) << 8) | 0x2, inputModMask); //set sig_mod width and delay
			OtsUDPHardware::write(writeBuffer);

			writeBuffer.resize(0);
			OtsUDPFirmwareCore::write(writeBuffer, ((channelCount+1) << 8) | 0x4, enableInput?0:1); //enable/disable channel
			OtsUDPHardware::write(writeBuffer);

			++channelCount;
		}
		__MOUT__ << "Input polariy mask is " << std::bitset<8>(inputPolarityMask) << std::endl;
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::write(writeBuffer, /*address*/0x1800B, /*data*/ inputPolarityMask); //setup input polarity
		OtsUDPHardware::write(writeBuffer);

		writeBuffer.resize(0);
		OtsUDPFirmwareCore::write(writeBuffer, 0x18000, 0x40); //resets section of 40MHz clock block
		OtsUDPHardware::write(writeBuffer);
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::write(writeBuffer,
				0x18008,
				(1<<8) |  //disable sig_log masking with 40MHz clock block
				(usingOptionalParams?
						optionalLink.getNode("TriggerClockMask").getValue<unsigned int>():
						0)); //chooses a section of 40MHz clock
		OtsUDPHardware::write(writeBuffer);
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::write(writeBuffer, 0x18000, 0x0); //enables a section of 40MHz clock block
		OtsUDPHardware::write(writeBuffer);


		writeBuffer.resize(0);
		OtsUDPFirmwareCore::write(writeBuffer, 0x7, ((1 << selectionOnOffMask) &
				(usingOptionalParams?
						optionalLink.getNode("Override1stANDWithSelectionLogicRegister").getValue<unsigned int>():
						-1)
				) |
				(usingOptionalParams?
						optionalLink.getNode("Override2ndORWithSelectionLogicRegister").getValue<unsigned int>():
						0)); //choose proper AND gate
		OtsUDPHardware::write(writeBuffer);

		writeBuffer.resize(0);
		OtsUDPFirmwareCore::write(writeBuffer, 0x6, 0x2); //enable selection logic output
		OtsUDPHardware::write(writeBuffer);

	}
	catch(const std::runtime_error &e)
	{
		__MOUT__ << "Failed input stage setup!\n" << e.what() << std::endl;
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
		
		__MOUT__ << "Setting up output channels..." << std::endl;
		//there are 3 output channels (alias: signorm, sigcms1, sigcms2)
		std::array<std::string,3> outChannelNames = {"Channel0","Channel1","Channel2"};
		for(const auto &channelName : outChannelNames)
		{
			outputChannelSourceSelect = theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode("OutputSourceSelect" + channelName).getValue<unsigned int>(); //0: sig_log   or    1: sig_norm/ch0
			__MOUT__ << "OutputSourceSelect = " << outputChannelSourceSelect << std::endl;
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
			OtsUDPFirmwareCore::write(writeBuffer, channelCount==0?0x4:(0x18016 + channelCount - 1), 0x33); //reset output channel block (bits 4/5 are reseting ch1/2)
			OtsUDPHardware::write(writeBuffer);
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::write(writeBuffer, channelCount==0?0x2:(0x18002 + channelCount - 1), outputModMask); //set output channel width/delay mask
			OtsUDPHardware::write(writeBuffer);
			
			__MOUT__ << "Output word for " << channelName << " is " << std::bitset<64>(outputModMask) << std::endl << " with a delay of " << outputDelay << " and a width of " << outputWidth << std::endl;
			
			if(channelCount)
			{
				writeBuffer.resize(0);
				OtsUDPFirmwareCore::write(writeBuffer, (0x18018 + channelCount - 1), outputChannelSourceSelect); //select source (1 := signorm, 0 := siglog)
				OtsUDPHardware::write(writeBuffer);
			}
			

			
			//time veto setup
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::write(writeBuffer, channelCount==0?0x1801B:(18011 + channelCount - 1), outputTimeVetoDuration);
			OtsUDPHardware::write(writeBuffer);

			//prescale veto setup
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::write(writeBuffer, 0x1801C + channelCount, outputPrescaleCount);
			OtsUDPHardware::write(writeBuffer);


			++channelCount;
		}


		//backpressure select
		// bit 0, 1, 2 mean apply backpressure to that output channel
		//  2 external backpressure inputs
		//  bit 3 is 0/1 disable/enable for first input
		//  bit 4 is 0/1 disable/enable for second input
		__MOUT__ << "Backpressure Selecting..." << std::endl;
		outputBackpressureSelect = usingOptionalParams && optionalLink.getNode("EnableBackPressureInputA").getValue<bool>();
		backpressureMask |= outputBackpressureSelect << 3;
		outputBackpressureSelect = usingOptionalParams && optionalLink.getNode("EnableBackPressureInputB").getValue<bool>();
		backpressureMask |= outputBackpressureSelect << 4;
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::write(writeBuffer, 0x1801A, backpressureMask);
		OtsUDPHardware::write(writeBuffer);

		//and 4 output muxes (first is special)
		__MOUT__ << "Setting output muxes..." << std::endl;
		unsigned int outputPolarityMask = 0; 
		bool outputInvertPolarity;
		channelCount = 0;
		for(const auto &channelName : channelNames)
		{
			outputMuxSelect = theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode("OutputMuxSelect" + channelName).getValue<unsigned int>();
			if(outputMuxSelect > 31) throw std::runtime_error("Invalid output mux select!");
			if(usingOptionalParams)
			{
			  outputInvertPolarity = usingOptionalParams && optionalLink.getNode("InvertPolarityOutput" + channelName).getValue<bool>();
			  outputPolarityMask |= ((outputInvertPolarity?1:0) << channelCount);
			}
			else {
			  outputPolarityMask = 0xF;
			}
/* Let any mux selection through so the Test/Debug mux can be used, along with other mux selections, add "used advanced mux?" selector on JS app?
			//default value is 0 := channel-0, 1:= ch1, 2:= ch2, 3:=ground
			if(channelCount == 0)
			{
				if(outputMuxSelect == 1)
					outputMuxSelect = 0xB;
				else if(outputMuxSelect == 2)
					outputMuxSelect = 0xC;
				else if(outputMuxSelect == 3)
					outputMuxSelect = 31; //ground
				else if(outputMuxSelect >= 4 && outputMuxSelect <= 12) //4x inputs after polarity mod, 4x after delayAndWidth, coincident output
				      outputMuxSelect -= 3; //ground
				  
			}
			else
			{
				if(outputMuxSelect == 3)
					outputMuxSelect = 0x7; //ground
			}
	*/
			
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::write(writeBuffer, channelCount == 0?0x5:(0x18013 + channelCount - 1), outputMuxSelect); //setup mux select
			OtsUDPHardware::write(writeBuffer);
			__MOUT__ << "Mux value for output channel " << channelName << " is " << outputMuxSelect << ", written to " << (channelCount == 0?0x5:(0x18013 + channelCount - 1)) << std::endl;
						
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::write(writeBuffer, /*address*/0x1800C, /*data*/ outputPolarityMask); //setup output polarity
			OtsUDPHardware::write(writeBuffer);
			__MOUT__ << "Input polariy mask is " << std::bitset<8>(outputPolarityMask) << std::endl;

			++channelCount;
		}

		//setup burst data blocks
		{
			__MOUT__ << "Setting up Burst Data Blocks" << std::endl;

			unsigned int logicSampleDelay = 0;
			unsigned int gateChannel = 0;
			unsigned int gateChannelReg = (gateChannelVetoSel[2]<<8) | (gateChannelVetoSel[1]<<4) | (gateChannelVetoSel[0]<<0); //nibbles ... 3:= delta-time, 2:= out-ch2, 1:= out-ch1, 0 := out-ch0
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

			writeBuffer.resize(0);
			OtsUDPFirmwareCore::write(writeBuffer, 0x1800E, outputMuxSelect); //setup burst output mux select
			OtsUDPHardware::write(writeBuffer);
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::write(writeBuffer, 0x18010, logicSampleDelay); //setup burst logic sample delay
			OtsUDPHardware::write(writeBuffer);
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::write(writeBuffer, 0x18004, gateChannelReg); //setup burst block gate signal choice
			OtsUDPHardware::write(writeBuffer);
		}
		
		//selection logic setup
		unsigned int coincidenceLogicWord = theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode("CoincidenceLogicWord").getValue<unsigned int>();
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::write(writeBuffer, 0x06, 0x01); //reset selection logic
		OtsUDPHardware::write(writeBuffer);
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::write(writeBuffer, 0x06, 0x00); //disable selection logic, take out of reset 
		OtsUDPHardware::write(writeBuffer);
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::write(writeBuffer, 0x07, coincidenceLogicWord); //setup selection logic
		OtsUDPHardware::write(writeBuffer);
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::write(writeBuffer, 0x06, 0x02); //renable selection  logic  
		OtsUDPHardware::write(writeBuffer);
		__MOUT__ << "Selection Logic word is  " << std::bitset<16>(coincidenceLogicWord) << std::endl;

	
	}
	catch(const std::runtime_error &e)
	{
		__MOUT__ << "Failed output stage setup!\n" << e.what() << std::endl;
		throw;
	}


	//at this point sig_log should be active (for chipscope)


	__MOUT__ << "Done with configuring."  << std::endl;
}

//========================================================================================================================
//void FENIMPlusInterface::configureDetector(const DACStream& theDACStream)
//{
//	__MOUT__ << "\tconfigureDetector" << std::endl;
//}

//========================================================================================================================
void FENIMPlusInterface::halt(void)
{
	__MOUT__ << "\tHalt" << std::endl;
	stop();
}

//========================================================================================================================
void FENIMPlusInterface::pause(void)
{
	__MOUT__ << "\tPause" << std::endl;
	stop();
}

//========================================================================================================================
void FENIMPlusInterface::resume(void)
{
	__MOUT__ << "\tResume" << std::endl;
	start("");
}

//========================================================================================================================
void FENIMPlusInterface::start(std::string )//runNumber)
{
	__MOUT__ << "\tStart" << std::endl;
	    std::string writeBuffer;

	//Run Start Sequence Commands
	//runSequenceOfCommands("LinkToStartSequence");


	ConfigurationTree optionalLink = theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode("LinkToOptionalParameters");
	bool usingOptionalParams =
			!optionalLink.isDisconnected();

	if(usingOptionalParams && optionalLink.getNode("EnableBurstData").getValue<bool>())
		//OtsUDPHardware::write(
		OtsUDPFirmwareCore::startBurst(writeBuffer);
		//);


	//enable nim plus burst data
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::write(writeBuffer, /*address*/ 0x1801F, /*data*/0x6);
	OtsUDPHardware::write(writeBuffer);
}

//========================================================================================================================
void FENIMPlusInterface::stop(void)
{
	__MOUT__ << "\tStop" << std::endl;
	    std::string writeBuffer;
	//Run Stop Sequence Commands

	//runSequenceOfCommands("LinkToStopSequence");

	//OtsUDPHardware::write(
	OtsUDPFirmwareCore::stopBurst(writeBuffer);
	//);

	

	//there are 3 output channels (alias: signorm, sigcms1, sigcms2)

	writeBuffer.resize(0);
	OtsUDPFirmwareCore::write(writeBuffer, /*address*/ 0x4, /*data*/0x33);//only reset signorm  0x33); //reset output channel blocks synchronously
	OtsUDPHardware::write(writeBuffer);	      
}

//========================================================================================================================
bool FENIMPlusInterface::running(void)
{
	sleep(5);
	__MOUT__ << "\running" << std::endl;

	//		//example!
	//		//play with array of 8 LEDs at address 0x1003

	ConfigurationTree optionalLink = theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode("LinkToOptionalParameters");
	bool usingOptionalParams =
			!optionalLink.isDisconnected();
	std::string writeBuffer;
	// 0x0/0x8 to 0x4 to use edge detection
	try
	{
		unsigned char channelCount = 0;
		bool enable40MHzMask;
		unsigned int gateChannelVetoSel;

		//there are 3 output channels (alias: signorm, sigcms1, sigcms2)
		std::array<std::string,3> outChannelNames = {"Channel0","Channel1","Channel2"};

		__MOUT__ << "Enabling output trigger channels!" << std::endl;

		//must do channel 0 last!! (synchronously enables all 3 channels)
		for(channelCount = 2; channelCount <= 2; --channelCount)
		{
			enable40MHzMask = usingOptionalParams && optionalLink.getNode("EnableClockMask" + outChannelNames[channelCount]).getValue<bool>();
			gateChannelVetoSel = usingOptionalParams?
					optionalLink.getNode("InputChannelVetoSourceForOutput" + outChannelNames[channelCount]).getValue<int>():
					0;

			writeBuffer.resize(0);
			OtsUDPFirmwareCore::write(writeBuffer, /*address*/ channelCount==0?0x4:(0x18016 + channelCount - 1),
					/*data*/ (enable40MHzMask?0x0:0x8) |
					(gateChannelVetoSel <= 1?0:(1<<2))); //unreset output channel block
			OtsUDPHardware::write(writeBuffer);
		}


	}
	catch(const std::runtime_error &e)
	{
		__MOUT__ << "Failed start setup!\n" << e.what() << std::endl;
	}

	return false;
}

//========================================================================================================================
//NOTE: buffer for address must be at least size universalAddressSize_
//NOTE: buffer for returnValue must be max UDP size to handle return possibility
int ots::FENIMPlusInterface::universalRead(char *address, char *returnValue)
{
	__MOUT__ << "address size " << universalAddressSize_ << std::endl;

	__MOUT__ << "Request: ";
	for(unsigned int i=0;i<universalAddressSize_;++i)
		printf("%2.2X",(unsigned char)address[i]);
	std::cout << std::endl;

	std::string readBuffer, sendBuffer;
	OtsUDPFirmwareCore::read(sendBuffer,address,1 /*size*/);

	//OtsUDPHardware::read(FSSRFirmware::universalRead(address), readBuffer) < 0;
	try
	{
		OtsUDPHardware::read(sendBuffer, readBuffer); // data reply
	}
	catch(std::runtime_error &e)
	{
		__MOUT__ << "Caught it! This is when it's getting time out error" << std::endl;
		__MOUT_ERR__ << e.what() << std::endl;
		return -1;
	}

	__MOUT__ << "Result SIZE: " << readBuffer.size() << std::endl;
	std::memcpy(returnValue,readBuffer.substr(2).c_str(),universalDataSize_);
	return 0;
}

//========================================================================================================================
//NOTE: buffer for address must be at least size universalAddressSize_
//NOTE: buffer for writeValue must be at least size universalDataSize_
void ots::FENIMPlusInterface::universalWrite(char* address, char* writeValue)
{
	__MOUT__ << "address size " << universalAddressSize_ << std::endl;
	__MOUT__ << "data size " << universalDataSize_ << std::endl;
	__MOUT__ << "Sending: ";
	for(unsigned int i=0;i<universalAddressSize_;++i)
		printf("%2.2X",(unsigned char)address[i]);
	std::cout << std::endl;

	std::string sendBuffer;
	OtsUDPFirmwareCore::write(sendBuffer,address,writeValue,1 /*size*/);
	OtsUDPHardware::write(sendBuffer); // data request
}

DEFINE_OTS_INTERFACE(FENIMPlusInterface)
