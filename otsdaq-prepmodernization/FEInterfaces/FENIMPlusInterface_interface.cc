#include "otsdaq-prepmodernization/FEInterfaces/FENIMPlusInterface.h"
#include "otsdaq/MessageFacility/MessageFacility.h"
#include "otsdaq/Macros/CoutMacros.h"
#include "otsdaq/Macros/InterfacePluginMacros.h"
#include <iostream>     // std::cout, std::dec, std::hex, std::oct
#include <set>
#include <stdint.h>
#include <algorithm>


using namespace ots;

#undef __MF_SUBJECT__
#define __MF_SUBJECT__ "FE-FENIMPlusInterface"

FENIMPlusInterface::FENIMPlusInterface(const std::string&       interfaceUID,
                                       const ConfigurationTree& theXDAQContextConfigTree,
                                       const std::string& interfaceConfigurationPath)
    : Socket(theXDAQContextConfigTree.getNode(interfaceConfigurationPath)
                 .getNode("HostIPAddress")
                 .getValue<std::string>(),
             theXDAQContextConfigTree.getNode(interfaceConfigurationPath)
                 .getNode("HostPort")
                 .getValue<unsigned int>())
    , FEOtsUDPTemplateInterface(
          interfaceUID, theXDAQContextConfigTree, interfaceConfigurationPath)
{
	// register FE Macro Functions
	registerFEMacroFunction(
	    "GenerateTriggers",  // feMacroName
	    static_cast<FEVInterface::frontEndMacroFunction_t>(
	        &FENIMPlusInterface::FEMacroGenerateTriggers),
	    std::vector<std::string>{"numberOfTriggers",
	                             "signalHiDuration",
	                             "signalLoDuration"},      // namesOfInputArgs
	    std::vector<std::string>{"triggersWereLaunched"},  // namesOfOutputArgs
	    1);                                                // requiredUserPermissions
}
	    

//==============================================================================
FENIMPlusInterface::~FENIMPlusInterface(void) {}

//==============================================================================
void FENIMPlusInterface::configure(void)
{
	__CFG_COUT__ << "configure" << std::endl;

	ConfigurationTree optionalLink =
	    theXDAQContextConfigTree_.getNode(theConfigurationPath_)
	        .getNode("LinkToOptionalParameters");
	bool usingOptionalParameters = !optionalLink.isDisconnected();
	
	std::string writeBuffer;
	std::string readBuffer;
	uint64_t    readQuadWord;
	
	addrOffset = optionalLink.getNode("AddressOffset").getValue<uint64_t>();
	__CFG_COUT__ << "FW Block Address offset is configured as: 0x" << std::hex << addrOffset << __E__;
	// Used for when you have multiple NIM+/NIM+ Firmware blocks on one board, different fw blocks are addressed w/ different offsets in the upper 32b of all addresses


	////////////////////////////////////////////////////////////////////////////////
	// if clock reset is enabled reset clock
	// MUST BE FIXED ADDING SOFT RESET
	{
		try
		{
			if((usingOptionalParameters &&
			    optionalLink.getNode("EnableClockResetDuringConfigure").getValue<bool>() &&
			    optionalLink.getNode("PrimaryBoardConfig").getValue<bool>()))
			{
				__CFG_COUT__ << "\"Soft\" Resetting NIM PLUS Ethernet!" << std::endl;

				OtsUDPFirmwareCore::softEthernetReset(writeBuffer);
				OtsUDPHardware::write(writeBuffer);
				OtsUDPFirmwareCore::clearEthernetReset(writeBuffer);
				OtsUDPHardware::write(writeBuffer);
				// sleep(1); //seconds
			}
		}
		catch(...)
		{
			__CFG_COUT__ << "Could not find reset clock flag, so not resetting... "
			             << std::endl;
		}
	}
	FEOtsUDPTemplateInterface::configure();  // sets up destination IP/port
		if((optionalLink.getNode("PrimaryBoardConfig").getValue<bool>())){  //only configure clocks only if on "Primary" board config, to avoid configuring clocks (among other things) more than once
		//NimPlus v2 Input/Output Mux control
		//b7-b0 - FW Block A Input b15-b8 FW Block B Input
		uint64_t iomux_config = 0x0;
		uint64_t input_mux_config = ((optionalLink.getNode("InputMuxConfig").getValue<uint32_t>()));
		uint64_t output_mux_config = ((optionalLink.getNode("OutputMuxConfig").getValue<uint32_t>())) ;
		
		
			iomux_config = (output_mux_config <<  32) | input_mux_config;
			__CFG_COUT__ << "input mux config : 0x" << std::hex << input_mux_config << std::hex << __E__;
			__CFG_COUT__ << "output mux config : 0x" << std::hex << output_mux_config  << __E__;
			__CFG_COUT__ << "output mux config shifted: 0x" << std::hex << (output_mux_config << 32)  << __E__;
			__CFG_COUT__ << "iomux config : 0x" << std::hex << iomux_config  << __E__;
		
		  	OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer, /*address*/ 0x10000000999, /*data*/ iomux_config);
			OtsUDPHardware::write(writeBuffer);
		  
		  
		  
		// choose external or internal clock
		__CFG_COUT__ << "Choosing external or internal clock..." << std::endl;
		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer,
		    0x3,
		    (usingOptionalParameters
			? (optionalLink.getNode("UseExternalClock").getValue<bool>() ? 1 : 0)
			: 0) |
			(((usingOptionalParameters
			      ? (optionalLink.getNode("ExternalClockSource").getValue<unsigned int>()
				      ? (optionalLink.getNode("ExternalClockSource")
					    .getValue<unsigned int>() -
					1) /*subtract 1 to normal index*/
				      : 0 /*default to NW-FMC-PTA*/)
			      : 0) &
			  0x7)
			<< 4)  // Choosing external clock source := 1-4 (front panel NIM-input A-D),
				// 0 (NW-FMC-PTA clk source)

		);  // Choosing external := 1, internal := 0

		unsigned val =
		    (usingOptionalParameters
			? (optionalLink.getNode("UseExternalClock").getValue<bool>() ? 1 : 0)
			: 0) |
		    (((usingOptionalParameters
			  ? (optionalLink.getNode("ExternalClockSource").getValue<unsigned int>()
				  ? (optionalLink.getNode("ExternalClockSource")
					.getValue<unsigned int>() -
				    1) /*subtract 1 to normal index*/
				  : 0 /*default to NW-FMC-PTA*/)
			  : 0) &
		      0x7)
		    << 4);

		__CFG_COUT__ << "CHOOSING EXTERNAL CLOCK: " << usingOptionalParameters << " : "
			    << optionalLink.getNode("UseExternalClock").getValue<bool>() << " : "
			    << optionalLink.getNode("ExternalClockSource").getValue<unsigned int>()
			    << std::hex << " : " << val << std::dec << std::endl;
		;
		OtsUDPHardware::write(writeBuffer);
		usleep(100000);  // micro seconds
		// read NIM+ version (for debugging)
		OtsUDPFirmwareCore::readAdvanced(writeBuffer,
		                                 addrOffset + 0x5);  // This can be removed when you want
		OtsUDPHardware::read(writeBuffer,
		                     readBuffer);  // This can be removed when you want

		// read back clock lock loss status
		OtsUDPFirmwareCore::readAdvanced(writeBuffer, addrOffset + 0x10);
		OtsUDPHardware::read(writeBuffer, readQuadWord);
		__CFG_COUT__ << "Clocks lock loss " << ((readQuadWord >> 24) & 0xF) << __E__;

		// if clock lock was lost at some point, reset DCMs here
		//	and check clock lock again
		if(!((readQuadWord >> 24) & 0xF))
		{
			__CFG_COUT__ << "Re-locking clocks..." << std::endl;
			// reset clock PLLs
			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer, /*address*/ 0x999, /*data*/ 0x7);  // reset wiz0, wiz1, and nimDacClk
			OtsUDPHardware::write(writeBuffer);
			usleep(100000);  // micro seconds
			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer, /*address*/ 0x999, /*data*/ 0);  // unreset
			OtsUDPHardware::write(writeBuffer);
			usleep(100000);  // micro seconds
			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer, /*address*/ 0x999, /*data*/ 0x8);  // reset phase shift output clock
			OtsUDPHardware::write(writeBuffer);
			usleep(100000);  // micro seconds
			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer, /*address*/ 0x999, /*data*/ 0);  // unreset
			OtsUDPHardware::write(writeBuffer);
			usleep(100000);  // micro seconds

			// read back clock lock loss status
			OtsUDPFirmwareCore::readAdvanced(writeBuffer, addrOffset + 0x10);
			OtsUDPHardware::read(writeBuffer, readQuadWord);
			__CFG_COUT__ << "Clocks lock loss " << ((readQuadWord >> 24) & 0xF) << __E__;
		}

		// read NIM+ version (for debugging)
		OtsUDPFirmwareCore::readAdvanced(writeBuffer,addrOffset + 0x5);  // This can be removed when you want
		OtsUDPHardware::read(writeBuffer,readBuffer);  // This can be removed when you want
	}

	// Run Configure Sequence Commands
	// runSequenceOfCommands("LinkToConfigureSequence");

	// disable all 3 muxable trigger channels
	// always do this to avoid stray output triggers during configure
	if(1)
	{
		// addresses sig_norm and 2 veto channeling
		// write 3 to disable and reset

		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer, /*address*/ addrOffset + 0x4, /*data*/ 0x3);  // disable sig norm
		OtsUDPHardware::write(writeBuffer);

		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, addrOffset + 0x18016, 0x3);  // disable cms1
		OtsUDPHardware::write(writeBuffer);

		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, addrOffset + 0x18017, 0x3);  // disable cms2
		OtsUDPHardware::write(writeBuffer);

		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer, addrOffset + 0x5, 0x0);  // chA output mux to sig_norm
		OtsUDPHardware::write(writeBuffer);

		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer, addrOffset + 0x18013, 0x0);  // chB output mux to sig_norm
		OtsUDPHardware::write(writeBuffer);

		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer, addrOffset + 0x18014, 0x0);  // chC output mux to sig_norm
		OtsUDPHardware::write(writeBuffer);

		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer, addrOffset + 0x18015, 0x0);  // chD output mux to sig_norm
		OtsUDPHardware::write(writeBuffer);

		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer, addrOffset + 0x1800C, 0xF);  // setup output polarity
		OtsUDPHardware::write(writeBuffer);

		sel_ctl_register_ = 0x0;  // disable AND gate selection logic
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, addrOffset + 0x6, sel_ctl_register_);
		OtsUDPHardware::write(writeBuffer);
	}

	__CFG_COUT__ << "Initializing counter/sig-gen/acc-sync resets and enables." << __E__;
	// Reset all the counters for configure
	// Note: bit 6 which is acc_sync block reset)
	// Note: bit 5 which is sig gen block reset)
	nimEnables_.reset();  // set all bits to 0
	nimResets_.set();     // set all bits to 1
	nimResets_.reset(6);  // do not reset acc sync block
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer,addrOffset + 0x18000,nimResets_.to_ulong());  // reset everything (counters and vetos/ps)
	OtsUDPHardware::write(writeBuffer);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer,addrOffset + 0x18001,nimEnables_.to_ulong());  // disable everything
	OtsUDPHardware::write(writeBuffer);

	nimResets_.reset();  // set all bits to 0
	nimResets_.set(5);   // hold sig gen in reset (only unreset if enabled)
	OtsUDPFirmwareCore::writeAdvanced(
	    writeBuffer, addrOffset + 0x18000, nimResets_.to_ulong());  // unreset everything
	OtsUDPHardware::write(writeBuffer);
	
	std::array<std::string, 4> v1channelNames(
	    {"ChannelA", "ChannelB", "ChannelC", "ChannelD"});
	std::array<std::string, 8> v2channelNames(
	    {"ChannelA", "ChannelB", "ChannelC", "ChannelD", "ChannelE", "ChannelF", "ChannelG", "ChannelH"});
	
	// set up DACs
	bool doWriteDACs = false;
	try
	{ 
		doWriteDACs =
		    usingOptionalParameters &&
		    optionalLink.getNode("EnableDACSetupDuringConfigure").getValue<bool>() &&
		    optionalLink.getNode("PrimaryBoardConfig").getValue<bool>();
		    //Only configure dacs if enabled and if this is the "Primary" configuration for this NIM+ Board, so that we avoid setting the DAC's (among other things) multiple times in one setup cycle
	}
	catch(...)
	{
		__CFG_COUT__ << "Skipping DAC writing because enable field was not found in tree."
		             << std::endl;
	}

	if(doWriteDACs)
	{
		__CFG_COUT__ << "Setting up DACs" << std::endl;
		const std::string dacValueField = "DACValue";
		if(optionalLink.getNode("BoardVersion").getValue<int>() == 1){ //Nim+ v1 Dac Setup (4 Channels)
		  initDAC(); //Initalize DAC's, TODO check if nessicary or correct for v1?
		  for(const auto& channelName : v1channelNames){	
		    changeDACLevelv1(channelName,
				    optionalLink.getNode(dacValueField + channelName)
					.getValue<unsigned short>());
		  }
		}
		else if (optionalLink.getNode("BoardVersion").getValue<int>() == 2){ //NIM+ v2 Dac Setup (8 Channels)
		  initDAC(); //Initalize DAC's
		  for(const auto& channelName : v2channelNames){
		      changeDACLevelv2(channelName,
				    optionalLink.getNode(dacValueField + channelName)
					.getValue<unsigned short>());
		  }
		}
		else{
		    __CFG_COUT_ERR__ << "Error! No DAC's Set! Invalid NIM+ Board version was specified during DAC Setup! Make sure you've set a valid version (1 or 2)" << std::endl;
		}	
	}

	// setup sig_mod channels, the input delay and width stages and sig_log, and other
	// pre-sig_norm things
	try
	{
		unsigned char channelCount = 0;
		bool          invertPolarity;
		//,selectRawInput;
		// bool enableInput;
		unsigned int logicInput;
		uint64_t     inputModMask;
		unsigned int inputDelay;
		unsigned int inputWidth;

		unsigned char inputPolarityMask = 0;  // selectionRawInputMask = 0

		__CFG_COUT__ << "Setting up input channels..." << std::endl;
		for(const auto& channelName : v1channelNames)  // setup sig mod for each channel
		{
			// if(channelName != "ChannelD") { ++channelCount; continue;} //For Debugging
			// just one channel

			// enableInput =
			// theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode("EnableInput"
			// + channelName).getValue<bool>();

			logicInput = theXDAQContextConfigTree_.getNode(theConfigurationPath_)
			                 .getNode("LogicInput" + channelName)
			                 .getValue<unsigned int>();
			if(logicInput)
				--logicInput;  // handle non-default indexing
			sel_ctl_register_ |= (logicInput & 0x3) << (channelCount * 2 + 8);
			__CFG_COUT__ << "Logic input " << channelName << " : " << logicInput
			             << " => sel_ctl_register_= " << std::hex << sel_ctl_register_
			             << std::dec << std::endl;
			if(usingOptionalParameters)
			{
				inputDelay = optionalLink.getNode("DelayInput" + channelName)
				                 .getValue<unsigned int>();
				inputWidth = optionalLink.getNode("WidthInput" + channelName)
				                 .getValue<unsigned int>();
				inputModMask = (0xFFFFFFFFFFFFFFFF >> (64 - inputWidth)) << inputDelay;

				// selectRawInput = optionalLink.getNode("DoNotUseDelayAndWidthFor" +
				// channelName).getValue<bool>();
			}
			else
			{
				inputModMask = 0x7;  // b111 default value
				                     // selectRawInput = false; //default to not raw input
			}

			// selectionRawInputMask |= (selectRawInput << channelCount); //Note! Inverted
			// relative to user input (default to sigmod as input, i.e. not raw input ys)

			invertPolarity = usingOptionalParameters &&
			                 optionalLink.getNode("InvertPolarityInput" + channelName)
			                     .getValue<bool>();

			inputPolarityMask |= ((invertPolarity ? 1 : 0) << channelCount);

			__CFG_COUT__ << "Output word for " << channelName << " is "
			             << std::bitset<64>(inputModMask) << std::endl
			             << " with a delay of " << inputDelay << " and a width of "
			             << inputWidth << std::endl;

			OtsUDPFirmwareCore::writeAdvanced(writeBuffer,
			                                  /*address*/addrOffset + ((channelCount + 1) << 8),
			                                  /*data*/ 0x3);  // reset channel
			OtsUDPHardware::write(writeBuffer);

			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer,
			    addrOffset + (((channelCount + 1) << 8) | 0x2),
			    inputModMask);  // set sig_mod width and delay
			OtsUDPHardware::write(writeBuffer);

			// OtsUDPFirmwareCore::writeAdvanced(writeBuffer, ((channelCount+1) << 8) |
			// 0x4, enableInput?0:1); //enable/disable channel
			// OtsUDPHardware::write(writeBuffer);

			++channelCount;
		}
		__CFG_COUT__ << "Input polarity mask is " << std::bitset<8>(inputPolarityMask)
		             << std::endl;
		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer,
		    /*address*/addrOffset +  0x1800B,
		    /*data*/ inputPolarityMask);  // setup input polarity
		OtsUDPHardware::write(writeBuffer);

		// sel_ctl_register_ |= (selectionRawInputMask << 4);
		__CFG_COUT__ << " sel_ctl_register_: " << std::bitset<16>(sel_ctl_register_)
		             << std::endl;
		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer,
		    /*address*/ addrOffset + 0x6,
		    /*data*/ sel_ctl_register_);  // setup raw input selection muxes, assume the
		                                  // logic_control_register was 0 before this.
		                                  // (cleared at start of configure)
		OtsUDPHardware::write(writeBuffer);

		__CFG_COUT__ << "Writing 40 MHz clock delay." << __E__;
		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer,
		    addrOffset + 0x107,
		    (usingOptionalParameters
		         ? optionalLink.getNode("40MHzClockDelay").getValue<unsigned int>()
		         : 0));  // chooses a 40MHz clock phase relative to the accelerator clock
		                 // (in increments of ~3ns)
		OtsUDPHardware::write(writeBuffer);

		__CFG_COUT__ << "Writing clock mask setup." << __E__;
		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer,
		    addrOffset + 0x18008,
		    //(1<<8) |  //disable sig_log masking with 40MHz clock block
		    (usingOptionalParameters
		         ? optionalLink.getNode("ClockMaskSetup").getValue<unsigned int>()
		         : 0));  // chooses a section of 40MHz clock
		OtsUDPHardware::write(writeBuffer);

		// 40Mhz Clock Stuff - Update to reflect firmware changes
		nimResets_.set(6);
		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer,
		    addrOffset + 0x18000,
		    nimResets_.to_ulong());  // resets section of 40MHz clock block
		OtsUDPHardware::write(writeBuffer);

		nimResets_.reset(6);
		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer,
		    addrOffset + 0x18000,
		    nimResets_.to_ulong());  // enables a section of 40MHz clock block
		OtsUDPHardware::write(writeBuffer);

		__CFG_COUT__ << "Clock mask setup: " << std::hex
		             << optionalLink.getNode("ClockMaskSetup").getValue<unsigned int>()
		             << std::dec << std::endl;
	}
	catch(const std::runtime_error& e)
	{
		__CFG_COUT__ << "Failed input stage setup!\n" << e.what() << std::endl;
		throw;
	}

	// setup output stage
	try
	{
		unsigned char channelCount = 0;
		//bool          enableOutput;
		unsigned int  outputDelay;
		unsigned int  outputWidthMask;  // max is 64 bit mask
		uint64_t      outputWidth;
		uint64_t      outputModMask;

		unsigned int  outputMuxSelect;
		unsigned int  outputChannelSourceSelect;
		unsigned int  outputTimeVetoDuration, outputPrescaleCount;
		bool          outputBackpressureSelect;
		unsigned char backpressureMask      = 0;
		unsigned int  gateChannelVetoSel[3] = {0, 0, 0};

		__CFG_COUT__ << "Setting up output channels..." << std::endl;
		// there are 3 output channels (alias: signorm, sigcms1, sigcms2)
		std::array<std::string, 3> outChannelNames = {"Channel0", "Channel1", "Channel2"};
		for(const auto& channelName : outChannelNames)
		{
			outputChannelSourceSelect =
			    theXDAQContextConfigTree_.getNode(theConfigurationPath_)
			        .getNode("TriggerInput" + channelName)
			        .getValue<unsigned int>();  // 0: sig_log   or    1: sig_norm/ch0
			__CFG_COUT__ << "TriggerInput for " << channelName << " is "
			             << outputChannelSourceSelect << std::endl;
			if(outputChannelSourceSelect)  // if non-default, subtract 1 so choice 1
			                               // evaluates to 0, and so on..
				--outputChannelSourceSelect;

			if(usingOptionalParameters)
			{
				outputDelay = optionalLink.getNode("DelayTriggerOutput" + channelName)
				                  .getValue<unsigned int>();
				outputWidth = optionalLink.getNode("WidthTriggerOutput" + channelName)
				                  .getValue<uint64_t>();

				if(outputWidth != 0)
				{
					if(outputWidth > 64)
						outputWidthMask = 64;
					else
					{
						outputWidthMask = outputWidth;
						outputWidth     = 0;
					}
					outputModMask = (0xFFFFFFFFFFFFFFFF >> (64 - outputWidthMask))
					                << outputDelay;
				}
				else                    // outputWidth == 0
					outputModMask = 0;  // disables output!

				outputTimeVetoDuration =
				    optionalLink.getNode("TimeVetoTriggerOutput" + channelName)
				        .getValue<unsigned int>();  // 0 ignores time veto, units of 3ns
				                                    // (NIM+X) or 6ns (NIM+)
				outputPrescaleCount =
				    optionalLink.getNode("PrescaleTriggerOutput" + channelName)
				        .getValue<unsigned int>();
				outputBackpressureSelect =
				    optionalLink.getNode("BackpressureTriggerOutput" + channelName)
				        .getValue<bool>();
				gateChannelVetoSel[channelCount] =
				    optionalLink.getNode("VetoSourceTriggerOutput" + channelName)
				        .getValue<int>();
				__CFG_COUT__ << "Raw gateChannelVetoSelect for " << channelName << " is "
				             << gateChannelVetoSel[channelCount] << std::endl;
				// 0/1 := No Veto, 2-5 := Input_A-D
			}
			else  // defaults
			{
				outputModMask            = 0xFFF;
				outputWidth              = 0;
				outputTimeVetoDuration   = 0;
				outputPrescaleCount      = 0;
				outputBackpressureSelect = false;
			}

			if(gateChannelVetoSel[channelCount] <= 1)
				gateChannelVetoSel[channelCount] = 4;  // Ground on mux
			else
				gateChannelVetoSel[channelCount] -= 2;  // 0-3 on mux is chA-D

			backpressureMask |= (outputBackpressureSelect ? 1 : 0) << channelCount;

			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer,
			    addrOffset + (channelCount == 0 ? 0x4 : (0x18016 + channelCount - 1)),
			    0x33);  // reset output channel block (bits 4/5 are reseting ch1/2)
			OtsUDPHardware::write(writeBuffer);

			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer,
			    addrOffset + (channelCount == 0 ? 0x2 : (0x18002 + channelCount - 1)),
			    outputModMask);  // set output channel width/delay mask
			OtsUDPHardware::write(writeBuffer);

			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer,
			    addrOffset + (0x106 + channelCount * 0x100),
			    outputWidth | (uint64_t(outputWidth ? 1 : 0 /*enable*/)
			                   << 63));  // set output channel long width count
			OtsUDPHardware::write(writeBuffer);

			__CFG_COUT__ << "Output word for " << channelName << " is "
			             << std::bitset<64>(outputModMask) << std::endl;
			__CFG_COUT__ << "Output delay of " << outputDelay
			             << " and an extended width of " << outputWidth << std::endl;

			if(channelCount)
			{
				writeBuffer.resize(0);
				OtsUDPFirmwareCore::writeAdvanced(
				    writeBuffer,
				    addrOffset + (0x18018 + channelCount - 1),
				    outputChannelSourceSelect);  // select source (1 := signorm, 0 :=
				                                 // siglog)
				OtsUDPHardware::write(writeBuffer);
				__CFG_COUT__ << "Output src select is " << outputChannelSourceSelect
				             << " for " << channelName << std::endl;
			}

			// time veto setup
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer,
			    addrOffset + (channelCount == 0 ? 0x1801B : (0x18011 + channelCount - 1)),
			    outputTimeVetoDuration);
			OtsUDPHardware::write(writeBuffer);

			__CFG_COUT__ << "Veto count for " << channelName << " is "
			             << outputTimeVetoDuration << " writing to ch "
			             << addrOffset + (channelCount == 0 ? 0x1801B : (0x18011 + channelCount - 1))
			             << std::endl;

			// prescale veto setup
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer, addrOffset + (0x1801C + channelCount), 0);  // Set to 0, then set to value
			OtsUDPHardware::write(writeBuffer);
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer, addrOffset + (0x1801C + channelCount), outputPrescaleCount);
			OtsUDPHardware::write(writeBuffer);

			__CFG_COUT__ << "Prescaler count for " << channelName << " is "
			             << outputPrescaleCount << " writing to ch "
			             << addrOffset + (0x1801C + channelCount) << std::endl;

			++channelCount;
		}

		// backpressure select
		// bit 0, 1, 2 mean apply backpressure to that output channel
		//  2 external backpressure inputs
		//  bit 3 is 0/1 disable/enable for first input
		//  bit 4 is 0/1 disable/enable for second input
		__CFG_COUT__ << "Backpressure Selecting..." << std::endl;
		outputBackpressureSelect =
		    usingOptionalParameters &&
		    optionalLink.getNode("EnableBackPressureNwFmcPta1").getValue<bool>();
		backpressureMask |= outputBackpressureSelect << 3;
		outputBackpressureSelect =
		    usingOptionalParameters &&
		    optionalLink.getNode("EnableBackPressureNwFmcPta2").getValue<bool>();
		backpressureMask |= outputBackpressureSelect << 4;
		writeBuffer.resize(0);
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, addrOffset + 0x1801A, backpressureMask);
		OtsUDPHardware::write(writeBuffer);

		// force output clk/trig bank to D by default
		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer, addrOffset + 0x200, (uint64_t)-1);  // setup burst output mux select
		OtsUDPHardware::write(writeBuffer);

		// and 4 output muxes (first is special)
		__CFG_COUT__ << "Setting output muxes..." << std::endl;
		unsigned int outputPolarityMask = 0;
		bool         outputInvertPolarity;
		channelCount = 0;
		for(const auto& channelName : v1channelNames)
		{
			outputMuxSelect = theXDAQContextConfigTree_.getNode(theConfigurationPath_)
			                      .getNode("OutputMuxSelect" + channelName)
			                      .getValue<unsigned int>();
			if(outputMuxSelect)
				--outputMuxSelect;  // default is 0, the actual selection address for all
				                    // other choices is 1 higher

			if(outputMuxSelect > 31)
			{
				__SS__;
				throw std::runtime_error(ss.str() + "Invalid output mux select!");
			}

			if(usingOptionalParameters)
			{
				outputInvertPolarity =
				    usingOptionalParameters &&
				    optionalLink.getNode("InvertPolarityOutput" + channelName)
				        .getValue<bool>();
				outputPolarityMask |= ((outputInvertPolarity ? 1 : 0) << channelCount);
			}
			else
			{
				outputPolarityMask = 0xF;
			}

			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer,
			    addrOffset + (channelCount == 0 ? 0x5 : (0x18013 + channelCount - 1)),
			    outputMuxSelect);  // setup mux select
			OtsUDPHardware::write(writeBuffer);
			__CFG_COUT__ << "Mux value for output channel " << channelName << " is "
			             << outputMuxSelect << ", written to 0x" << std::hex
			             << addrOffset + (channelCount == 0 ? 0x5 : (0x18013 + channelCount - 1))
			             << std::dec << std::endl;

			++channelCount;
		}

		writeBuffer.resize(0);
		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer,
		    /*address*/ addrOffset + 0x1800C,
		    /*data*/ outputPolarityMask);  // setup output polarity
		OtsUDPHardware::write(writeBuffer);
		__CFG_COUT__ << "Output polarity mask is " << std::bitset<8>(outputPolarityMask)
		             << std::endl;

		// setting up trigger/clk output banks A and B
		if(usingOptionalParameters)
		{
			// trigger/clock output banks are controlled by a single
			//	64-bit register at address 0x200
			//
			//	there are 12x 53MHz trigger channels
			//	and 6x 40MHz trigger channels
			//
			//	..each controlled by 2 bits to choose mux output channels 0-3
			//
			//	this is a total of 18*2=36 control bits.. so 0 to 35 are used
			//
			//	In the configuration, we organize by how the panel was assuembled
			//	which is two banks of 9 like so:
			//		* 0-5 are 53MHz
			//		* 6-8 are 40MHz

			uint64_t     trigClkOutBankRegister = 0;
			unsigned int bank                   = 0;

			std::array<std::string, 2> trigClkOutBankNames = {
			    "TriggerMuxSelectionsBankA", "TriggerMuxSelectionsBankB"};
			for(auto& trigClkOutBankName : trigClkOutBankNames)
			{
				__COUTV__(trigClkOutBankName);

				ConfigurationTree::BitMap bankSelectionMap =
				    optionalLink.getNode(trigClkOutBankName).getValueAsBitMap();

				// 0-5 are 53MHz
				// 6-8 are 40MHz

				unsigned int col = 0;
				for(; col < 6; ++col)
					trigClkOutBankRegister |=
					    (bankSelectionMap.get(0, col) & 0x3)
					    << ((bank * 6 + col) *
					        2);  // put the two bit mux selection in the right place

				for(; col < 9; ++col)
					trigClkOutBankRegister |=
					    (bankSelectionMap.get(0, col) & 0x3)
					    << ((12 + bank * 3 + col) *
					        2);  // put the two bit mux selection in the right place

				++bank;
			}

			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer,
			    addrOffset + 0x200,
			    trigClkOutBankRegister);  // setup burst output mux select
			OtsUDPHardware::write(writeBuffer);
		}

		// setup burst data blocks
		{
			__CFG_COUT__ << "Setting up Burst Data Blocks" << std::endl;

			unsigned int logicSampleDelay = 0;
			unsigned int gateChannel      = 0;
			unsigned int gateChannelReg =
			    (gateChannelVetoSel[2] << 8) | (gateChannelVetoSel[1] << 4) |
			    (gateChannelVetoSel[0] << 0);  // nibbles ... 3:= delta-time, 2:= out-ch2,
			                                   // 1:= out-ch1, 0 := out-ch0
			__CFG_COUT__ << "Gate Ch Veto Selections - 2: " << gateChannelVetoSel[2]
			             << std::endl;
			__CFG_COUT__ << "Gate Ch Veto Selections - 1: " << gateChannelVetoSel[1]
			             << std::endl;
			__CFG_COUT__ << "Gate Ch Veto Selections - 0: " << gateChannelVetoSel[0]
			             << std::endl;
			// value of 4 is no-gate
			// 0-3 are input channels A-D depending on polarity

			if(usingOptionalParameters)
			{
				outputMuxSelect =
				    optionalLink.getNode("BurstDataMuxSelect").getValue<unsigned int>();
				logicSampleDelay = optionalLink.getNode("BurstDataLogicSampleDelay")
				                       .getValue<unsigned int>();
				gateChannel = optionalLink.getNode("BurstDataGateInputChannel")
				                  .getValue<unsigned int>();
			}
			else
				outputMuxSelect = 0;

			if(outputMuxSelect)  // if non-default, subtract 1 so choice 1 evaluates to 0,
			                     // and so on..
				--outputMuxSelect;

			if(gateChannel >
			   1)  // if non-default, subtract 1 so choice 1 evaluates to 0, and so on..
			{
				gateChannel -= 2;  // to give range 0 to 3
				gateChannelReg |= gateChannel << 12;
			}
			else  // default is no gate
			{
				gateChannelReg |= 4 << 12;
			}
			__CFG_COUT__ << "Gate Ch Veto Selections - Burst: " << gateChannel
			             << std::endl;
			std::bitset<16> gateChannelRegBitset(gateChannelReg);
			__CFG_COUT__ << "Gate Ch Veto Register: " << gateChannelReg << std::endl;
			__CFG_COUT__ << "Gate Ch Veto Register: " << gateChannelRegBitset.to_string()
			             << std::endl;

			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer, addrOffset + 0x1800E, outputMuxSelect);  // setup burst output mux select
			OtsUDPHardware::write(writeBuffer);

			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer,
			    addrOffset + 0x18010,
			    logicSampleDelay);  // setup burst logic sample delay
			OtsUDPHardware::write(writeBuffer);

			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer,
			    addrOffset + 0x18004,
			    gateChannelReg);  // setup burst block gate signal choice
			OtsUDPHardware::write(writeBuffer);

			if(outputMuxSelect == 1)
			{  // enable timestamp counter if using the scope
				OtsUDPFirmwareCore::writeAdvanced(
				    writeBuffer, addrOffset + 0x1800F, 0x2);  // Enable Timestamp counter for scope
				OtsUDPHardware::write(writeBuffer);
			}
			else
			{
				OtsUDPFirmwareCore::writeAdvanced(
				    writeBuffer, addrOffset + 0x1800F, 0);  // Enable Timestamp counter for scope
				OtsUDPHardware::write(writeBuffer);
			}
		}

		// selection logic setup
		unsigned int coincidenceLogicWord =
		    theXDAQContextConfigTree_.getNode(theConfigurationPath_)
		        .getNode("CoincidenceLogicWord")
		        .getValue<unsigned int>();

		sel_ctl_register_ |= 1;  // reset selection logic (i.e. bit-0 <= 1)
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, addrOffset + 0x6, sel_ctl_register_);
		OtsUDPHardware::write(writeBuffer);
		__CFG_COUT__ << " sel_ctl_register_ 1: " << std::bitset<16>(sel_ctl_register_)
		             << std::endl;

		sel_ctl_register_ &=
		    ~(3);  // disable selection logic, take out of reset (i.e. bits 0 and 1 <= 0)
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, addrOffset + 0x6, sel_ctl_register_);
		OtsUDPHardware::write(writeBuffer);
		__CFG_COUT__ << " sel_ctl_register_ 2: " << std::bitset<16>(sel_ctl_register_)
		             << std::endl;

		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer, addrOffset + 0x7, coincidenceLogicWord);  // setup selection logic
		OtsUDPHardware::write(writeBuffer);
		__CFG_COUT__ << "Selection Logic word is bit: "
		             << std::bitset<16>(coincidenceLogicWord) << std::endl;
		//__CFG_COUT__ << "Selection Logic word is int: " << coincidenceLogicWord <<
		// std::endl;

		// NOTE: Consider commenting this out and NOT enabling sig_log during configure
		// (wait until running)
		sel_ctl_register_ |= 1 << 1;  // renable selection logic (i.e. bit-1 <= 1)
		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer, addrOffset + 0x6, sel_ctl_register_);  // re-enable selection logic
		OtsUDPHardware::write(writeBuffer);
		__CFG_COUT__ << " sel_ctl_register_: 3" << std::bitset<16>(sel_ctl_register_)
		             << std::endl;

		unsigned int sigGenCount =
		    optionalLink.getNode("SignalGeneratorPulseCount").getValue<unsigned int>();
		unsigned int sigGenHighPer =
		    optionalLink.getNode("SignalGeneratorHighPeriod").getValue<unsigned int>();
		unsigned int sigGenLowPer =
		    optionalLink.getNode("SignalGeneratorLowPeriod").getValue<unsigned int>();
		bool sigGenPolarity =
		    optionalLink.getNode("SignalGeneratorInvertPolarity").getValue<bool>();
		unsigned int sigGenPolarityMask = (sigGenPolarity ? 1 : 0);

		if(optionalLink.getNode("SignalGeneratorEnable").getValue<bool>())
		{
			nimResets_.set(5);  // set bit 5 in resets to 1 to force a sig gen reset)
			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer, addrOffset + 0x18000, nimResets_.to_ulong());  // reset sig gen
			OtsUDPHardware::write(writeBuffer);			
			nimEnables_.reset(5);
			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer, addrOffset + 0x18001, nimEnables_.to_ulong());  //disable sig gen for config
			OtsUDPHardware::write(writeBuffer);

			__CFG_COUT__ << "Resets all for sig gen!" << std::endl;

			// signal generator setup
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer, addrOffset + 0x18005, sigGenCount);  // sig gen pulse count
			OtsUDPHardware::write(writeBuffer);
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer, addrOffset + 0x18006, sigGenHighPer);  // sig gen high per
			OtsUDPHardware::write(writeBuffer);
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer, addrOffset + 0x18007, sigGenLowPer);  // sig gen low per
			OtsUDPHardware::write(writeBuffer);
			writeBuffer.resize(0);
			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer, addrOffset + 0x1800D, sigGenPolarityMask);  // sig gen polarity
			OtsUDPHardware::write(writeBuffer);

			__CFG_COUT__ << "Configured signal generator with a count of " << sigGenCount
			             << " (0 is continuous output), a high period of "
			             << sigGenHighPer << ", a low period of " << sigGenLowPer
			             << ", and output inversion set to " << sigGenPolarity
			             << std::endl;

			nimResets_.reset(5);  // reset bit 5 in resets to 0 to unreset sig gen
			nimEnables_.set(5);   // set bit 5 in enables to 1 to enable sig gen
		}
		else
		{
			nimResets_.set(
			    5);  // set bit 5 in resets to 1 to make sure sig gen is held in reset
			nimEnables_.reset(5);  // set bit 5 in enables to 0 to disable sig gen
			__CFG_COUT__ << "Signal Generator disabled" << std::endl;
		}

		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer, addrOffset + 0x18000, nimResets_.to_ulong());  // set sig gen in or out of reset
		OtsUDPHardware::write(writeBuffer);
		__CFG_COUT__ << "Nim Resets (after sig gen setup) set to " << nimResets_
		             << std::endl;

		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer, addrOffset + 0x18001, nimEnables_.to_ulong());  // enable or disable sig gen
		OtsUDPHardware::write(writeBuffer);
		__CFG_COUT__ << "Nim Enables (after sig gen setup) set to " << nimEnables_
		             << std::endl;
	}
	catch(const std::runtime_error& e)
	{
		__CFG_COUT__ << "Failed output stage setup!\n" << e.what() << std::endl;
		throw;
	}

	__CFG_COUT__ << "Checking sel_ctl_register_... Expect sel_ctl_register_ = 0x"
	             << std::hex << sel_ctl_register_ << std::dec << std::endl;

	// now that configure done, save sel_ctl_register_ for later
	OtsUDPFirmwareCore::readAdvanced(writeBuffer, addrOffset + 10 /*address*/);  // read back sig log - ?? is address correct?, 

	// uint64_t readback;
	// OtsUDPHardware::read(writeBuffer,readback);
	// sel_ctl_register_ &= 0xffffffff00000000;
	// sel_ctl_register_ += readback;
	//__CFG_COUT__ << "receiveQuadWord all = 0x" << std::hex <<
	//		sel_ctl_register_ << std::dec << std::endl;

	// sel_ctl_register_ = ((sel_ctl_register_>>(5*8))&0x0FF);

	__CFG_COUT__ << "sel_ctl_register_ = 0x" << std::hex << sel_ctl_register_ << std::dec
	             << std::endl;

	// at this point sig_log should be active (for chipscope, and recognizing of trigger
	// input active)

	__CFG_COUT__ << " sel_ctl_register_: " << std::bitset<16>(sel_ctl_register_)
	             << std::endl;

	__CFG_COUT__ << "Done with configuring." << std::endl;
}  // end configure()

//==============================================================================
void FENIMPlusInterface::halt(void)
{
	__CFG_COUT__ << "\tHalt" << std::endl;
	stop();
}

//==============================================================================
void FENIMPlusInterface::pause(void)
{
	__CFG_COUT__ << "\tPause" << std::endl;
	stop();
}

//==============================================================================
void FENIMPlusInterface::resume(void)
{
	__CFG_COUT__ << "\tResume" << std::endl;
	start("");
}

//==============================================================================
void FENIMPlusInterface::start(std::string runNumber)
{
	runNumber_ = runNumber;
	__CFG_COUT__ << "\tStart " << runNumber_ << std::endl;
	std::string writeBuffer;

	// Run Start Sequence Commands
	// runSequenceOfCommands("LinkToStartSequence");

	__CFG_COUT__ << "Disabling sig_log" << std::endl;
	OtsUDPFirmwareCore::writeAdvanced(
	    writeBuffer, addrOffset + 0x6, (sel_ctl_register_) & (~(1 << 1)));  // disable siglog block
	OtsUDPHardware::write(writeBuffer);

	__CFG_COUT__ << "Resetting all counters (including sig log)" << std::endl;
	// 0x18000 ==> counter resets
	nimResets_.set();     // set all bits to 1
	nimResets_.reset(6);  // do not reset acc sync block
	nimResets_.reset(5);  // do not reset sig gen block
	OtsUDPFirmwareCore::writeAdvanced(
	    writeBuffer, addrOffset + 0x18000, nimResets_.to_ulong());  // reset everything (counters, e.g.
	                                                   // sig_log and sig_norm/cms1/cms2
	                                                   // counters, and vetos/ps)
	OtsUDPHardware::write(writeBuffer);

	nimResets_.reset();  // reset all bits to 0
	OtsUDPFirmwareCore::writeAdvanced(
	    writeBuffer, addrOffset + 0x18000, nimResets_.to_ulong());  // unreset sig_log and sig_norm/cms1/cms2 counters
	OtsUDPHardware::write(writeBuffer);

	ConfigurationTree optionalLink =
	    theXDAQContextConfigTree_.getNode(theConfigurationPath_)
	        .getNode("LinkToOptionalParameters");
	bool usingOptionalParameters = !optionalLink.isDisconnected();

	if(usingOptionalParameters && optionalLink.getNode("EnableBurstData").getValue<bool>())
	{
		__CFG_COUT__ << "Enabling burst mode!" << __E__;
		OtsUDPFirmwareCore::startBurst(writeBuffer);
		OtsUDPHardware::write(writeBuffer);
	}

	// enable nim plus burst data
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ 0x1801F, /*data*/ 0x6);
	OtsUDPHardware::write(writeBuffer);
	__CFG_COUT__ << "\tStart Done" << std::endl;
}

//==============================================================================
void FENIMPlusInterface::stop(void)
{
	std::string writeBuffer;
	// immediately stop triggers (by disabling sig log)
	OtsUDPFirmwareCore::writeAdvanced(
	    writeBuffer, addrOffset + 0x6 /*address*/, (sel_ctl_register_) & (~(1 << 1)));  // disable siglog block
	OtsUDPHardware::write(writeBuffer);
	ConfigurationTree optionalLink = theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode("LinkToOptionalParameters");

	__CFG_COUT__ << "\tStop" << std::endl;

	// Run Stop Sequence Commands
	runSequenceOfCommands("LinkToStopSequence");

	// attempt to stop burst always
	OtsUDPFirmwareCore::stopBurst(writeBuffer);
	OtsUDPHardware::write(writeBuffer);

	uint64_t readQuadWord;

	if(!optionalLink.isDisconnected())
	{
		std::string
		    filename =  // theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode(
		    optionalLink.getNode("TriggerCountAtRunStopFilename").getValue<std::string>();

		if(filename != "DEFAULT" && filename != "")
		{
			std::string filename = optionalLink.getNode("TriggerCountAtRunStopFilename")
			                           .getValue<std::string>();

			if(filename != "DEFAULT" && filename != "")
			{
				filename += "_" + runNumber_ + ".cnt";

				__CFG_COUT__ << "Attempting to save counts to " << filename << __E__;
				FILE* fp =
				    fopen(  //("/data/TestBeam/2017_12_December/NimPlus/TriggerCount_" +
				            // runNumber_ + ".cnt").c_str()
				        filename.c_str(),
				        "w");
				if(fp)
				{
					__CFG_COUT__ << "Saving counts to " << filename << __E__;
					// std::string readBuffer;

					uint32_t count;
					uint8_t  tag;

					OtsUDPFirmwareCore::readAdvanced(writeBuffer, addrOffset + 0x102);
					OtsUDPHardware::read(writeBuffer, readQuadWord);

					count = (readQuadWord >> 32);
					tag   = count >> 28;           // top 4 bits
					count = (count & 0x0FFFFFFF);  // only 28 bits
					__CFG_COUT__ << "sig_log count = " << count << __E__;
					fprintf(fp, "sig_log   \t [tag=%d] %d 0x%4.4X\n", tag, count, count);

					count = (readQuadWord & 0x0FFFFFFFF);
					tag   = count >> 28;           // top 4 bits
					count = (count & 0x0FFFFFFF);  // only 28 bits
					__CFG_COUT__ << "sig_norm(out0) count = " << count << __E__;
					fprintf(
					    fp, "sig_norm(out0) \t [tag=%d] %d 0x%4.4X\n", tag, count, count);

					OtsUDPFirmwareCore::readAdvanced(writeBuffer, addrOffset + 0x100);
					OtsUDPHardware::read(writeBuffer, readQuadWord);

					count = (readQuadWord & 0x0FFFFFFFF);
					tag   = count >> 28;           // top 4 bits
					count = (count & 0x0FFFFFFF);  // only 28 bits
					__CFG_COUT__ << "sig_cms1(out1) count = " << count << __E__;
					fprintf(
					    fp, "sig_cms1(out1) \t [tag=%d] %d 0x%4.4X\n", tag, count, count);

					count = (readQuadWord >> 32);
					tag   = count >> 28;           // top 4 bits
					count = (count & 0x0FFFFFFF);  // only 28 bits
					__CFG_COUT__ << "sig_cms2(out2) count = " << count << __E__;
					fprintf(
					    fp, "sig_cms2(out2) \t [tag=%d] %d 0x%4.4X\n", tag, count, count);

					OtsUDPFirmwareCore::readAdvanced(writeBuffer, addrOffset + 0x105);
					OtsUDPHardware::read(writeBuffer, readQuadWord);

					count = (readQuadWord & 0x0FFFFFFFF);
					tag   = count >> 28;           // top 4 bits
					count = (count & 0x0FFFFFFF);  // only 28 bits
					__CFG_COUT__ << "muxout-A count = " << count << __E__;
					fprintf(fp, "muxout-A \t [tag=%d] %d 0x%4.4X\n", tag, count, count);

					count = (readQuadWord >> 32);
					tag   = count >> 28;           // top 4 bits
					count = (count & 0x0FFFFFFF);  // only 28 bits
					__CFG_COUT__ << "muxout-B count = " << count << __E__;
					fprintf(fp, "muxout-B \t [tag=%d] %d 0x%4.4X\n", tag, count, count);

					OtsUDPFirmwareCore::readAdvanced(writeBuffer, addrOffset + 0x106);
					OtsUDPHardware::read(writeBuffer, readQuadWord);

					count = (readQuadWord & 0x0FFFFFFFF);
					tag   = count >> 28;           // top 4 bits
					count = (count & 0x0FFFFFFF);  // only 28 bits
					__CFG_COUT__ << "muxout-C count = " << count << __E__;
					fprintf(fp, "muxout-C \t [tag=%d] %d 0x%4.4X\n", tag, count, count);

					count = (readQuadWord >> 32);
					tag   = count >> 28;           // top 4 bits
					count = (count & 0x0FFFFFFF);  // only 28 bits
					__CFG_COUT__ << "muxout-D count = " << count << __E__;
					fprintf(fp, "muxout-D \t [tag=%d] %d 0x%4.4X\n", tag, count, count);

					// check for clock loss
					OtsUDPFirmwareCore::readAdvanced(writeBuffer,addrOffset +  0x10);
					OtsUDPHardware::read(writeBuffer, readQuadWord);

					__CFG_COUT__ << "Clocks lock loss " << count << __E__;

					count = (((readQuadWord >> 24) & 0xF) >> 0) & 1;
					fprintf(
					    fp, "DAC       Clock-Lock-Loss \t %d 0x%4.4X\n", count, count);
					count = (((readQuadWord >> 24) & 0xF) >> 1) & 1;
					fprintf(
					    fp, "Main      Clock-Lock-Loss \t %d 0x%4.4X\n", count, count);
					count = (((readQuadWord >> 24) & 0xF) >> 2) & 1;
					fprintf(
					    fp, "External  Clock-Lock-Loss \t %d 0x%4.4X\n", count, count);
					count = (((readQuadWord >> 24) & 0xF) >> 3) & 1;
					fprintf(
					    fp, "OutPhase  Clock-Lock-Loss \t %d 0x%4.4X\n", count, count);

					fclose(fp);
				}
			}
		}
	}

	// there are 3 output channels (alias: signorm, sigcms1, sigcms2)

	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(
	    writeBuffer, /*address*/ addrOffset + 0x4, /*data*/ 0x33);  // only reset signorm  0x33);
	                                                   // //reset output channel blocks
	                                                   // synchronously
	OtsUDPHardware::write(writeBuffer);
}

//==============================================================================
bool FENIMPlusInterface::running(void)
{
	std::string writeBuffer;

	////////////////////////////////
	////////////////////////////////
	// long sleep so trigger numbers match
	// sleep(22);
	// sleep(1);

	__CFG_COUT__ << "Running" << std::endl;
	__CFG_COUT__ << " sel_ctl_register_: " << std::bitset<16>(sel_ctl_register_)
	             << std::endl;

	//		//example!
	//		//play with array of 8 LEDs at address 0x1003

	ConfigurationTree optionalLink =
	    theXDAQContextConfigTree_.getNode(theConfigurationPath_)
	        .getNode("LinkToOptionalParameters");
	bool usingOptionalParameters = !optionalLink.isDisconnected();

	unsigned int sleepSeconds = 0;
	// 0x0/0x8 to 0x4 to use edge detection
	try
	{

		__CFG_COUT__ << "Enabling output trigger channels!" << std::endl;
		//must do channel 0 last!! (synchronously enables all 3 channels)
		for(unsigned char channelCount = 2; channelCount <= 2; --channelCount)
		{
			bool          enable40MHzMask    = false;
			unsigned int  gateChannelVetoSel = 0;
			if(usingOptionalParameters)
			{
				sleepSeconds = optionalLink.getNode("SecondsDelayBeforeStartingTriggers")
				                   .getValue<unsigned int>();
			}
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, channelCount==0?0x4:(0x18016 + channelCount-1), (enable40MHzMask?0x0:0x8) | (gateChannelVetoSel <= 1?0:(1<<2)) ); //unreset output channel block
			OtsUDPHardware::write(writeBuffer);
		}
		if(usingOptionalParameters)
		{
			//Sending trigger pattern
			if(optionalLink.getNode("SignalGeneratorEnable").getValue<bool>())//THIS IS A SUPER PATCH TO RUN JIM FREEMAN STUFF! I have put false on all places where the variable SignalGeneratorEnable is used!
			{
				sendPatternTrigger(0xFFF000FFFFFF,"Channel1");
				__CFG_COUT__ << "Sending trigger pattern!" << __E__;
			}

			//Sleeping some time
			unsigned int sleepSeconds = optionalLink.getNode("SecondsDelayBeforeStartingTriggers").getValue<unsigned int>();
			__CFG_COUT__ << "Sleeping for " << sleepSeconds << " seconds..." << __E__;
			for(unsigned int second=0; second<sleepSeconds*10; second++)
			{
				if(WorkLoop::continueWorkLoop_ == false)
					return false;
				usleep(100000);//100ms so sleepSeconds*10
			}
			//Sending trigger pattern
			// if(optionalLink.getNode("SignalGeneratorEnable").getValue<bool>())//THIS IS A SUPER PATCH TO RUN JIM FREEMAN STUFF! I have put false on all places where the variable SignalGeneratorEnable is used!
			// {
			// 	__CFG_COUT__
			// 	    << "Ingore missing SecondsDelayBeforeStartingTriggers field..."
			// 	    << __E__;
			// }	void changeDACLevelv2(const std::string& channelName, unsigned int value);
		}

		// if(!sleepSeconds) sleepSeconds = 22;
		__CFG_COUT__ << "Sleeping for " << sleepSeconds << " seconds..." << __E__;
		sleep(sleepSeconds);

		unsigned char channelCount = 0;
		bool          enable40MHzMask;
		unsigned int  gateChannelVetoSel;

		// there are 3 output channels (alias: signorm, sigcms1, sigcms2)
		std::array<std::string, 3> outChannelNames = {"Channel0", "Channel1", "Channel2"};

			//Sleeping some time
			unsigned int sleepSeconds = optionalLink.getNode("SecondsDelayBeforeStartingTriggers").getValue<unsigned int>();
			__CFG_COUT__ << "Sleeping for " << sleepSeconds << " seconds..." << __E__;
			for(unsigned int second=0; second<sleepSeconds*10; second++)
			{
				if(WorkLoop::continueWorkLoop_ == false)
					return false;
				usleep(100000);//100ms so sleepSeconds*10
			}

		// must do channel 0 last!! (synchronously enables all 3 channels)
		for(channelCount = 2; channelCount <= 2; --channelCount)
		{
			enable40MHzMask =
			    usingOptionalParameters && optionalLink
			                               .getNode("EnableClockMaskTriggerOutput" +
			                                        outChannelNames[channelCount])
			                               .getValue<bool>();
			gateChannelVetoSel = usingOptionalParameters
			                         ? optionalLink
			                               .getNode("VetoSourceTriggerOutput" +
			                                        outChannelNames[channelCount])
			                               .getValue<int>()
			                         : 0;

			OtsUDPFirmwareCore::writeAdvanced(
			    writeBuffer,
			    addrOffset + (channelCount == 0 ? 0x4 : (0x18016 + channelCount - 1)),
			    (enable40MHzMask ? 0x0 : 0x8) |
			        (gateChannelVetoSel <= 1
			             ? 0
			             : (1 << 2)));  // unreset output channel block
			OtsUDPHardware::write(writeBuffer);
		}

		__CFG_COUT__ << "Enabling siglog block!" << __E__;
		__CFG_COUT__ << " sel_ctl_register_: " << std::bitset<16>(sel_ctl_register_)
		             << std::endl;
		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer,
		    addrOffset + 0x6,
		    sel_ctl_register_);  // enable sig mod block and
		                         // restore original register
		                         // value
		OtsUDPHardware::write(writeBuffer);
	}
	catch(const std::runtime_error& e)
	{
		__SS__ << "Failed start setup!\n" << e.what() << std::endl;
		__CFG_COUT_ERR__ << ss.str();
		throw std::runtime_error(ss.str());
	}
	return false;
}  // end running()

////==============================================================================
// void FENIMPlusInterface::FEMacroGenerateTriggers(FEVInterface::frontEndMacroInArgs_t
// argsIn, 		FEVInterface::frontEndMacroOutArgs_t argsOut)
//{
//	__CFG_COUT__ << "FEMacroGenerateTriggers" << __E__;
//
//	unsigned int numberOfTriggers =
//			FEVInterface::getFEMacroInputArgument<unsigned
// int>(argsIn,"numberOfTriggers"); 	unsigned int clocksOfDelayBetweenTriggers =
//			FEVInterface::getFEMacroInputArgument<unsigned
// int>(argsIn,"clocksOfDelayBetweenTriggers"); 	std::string& triggersWereLaunched =
//			FEVInterface::getFEMacroOutputArgument(argsOut,"triggersWereLaunched");
//
//	unsigned int numberOfTriggersStr =
//			FEVInterface::getFEMacroInputArgument<std::string>(argsIn,"numberOfTriggers");
//
//	__CFG_COUT__ << "numberOfTriggers " << numberOfTriggers << __E__;
//	__CFG_COUT__ << "numberOfTriggersStr " << numberOfTriggersStr << __E__;
//	__CFG_COUT__ << "clocksOfDelayBetweenTriggers " << clocksOfDelayBetweenTriggers <<
//__E__;
//
//
//	//TODO launch triggers based on parameters...
//
//
//	__CFG_COUT__ << "triggersWereLaunched " << triggersWereLaunched << __E__;
//	triggersWereLaunched = "Done!";
//	__CFG_COUT__ << "triggersWereLaunched " << triggersWereLaunched << __E__;
//	FEVInterface::setFEMacroOutputArgument<unsigned int>(argsOut,"triggersWereLaunched",
//			42.2f);
//	__CFG_COUT__ << "triggersWereLaunched " << triggersWereLaunched << __E__;
//}

//==============================================================================
void FENIMPlusInterface::FEMacroGenerateTriggers(__ARGS__)
{
	__CFG_COUT__ << "FEMacroGenerateTriggers" << __E__;

	unsigned int numberOfTriggers = __GET_ARG_IN__("numberOfTriggers", unsigned int);
	unsigned int signalHiDuration = __GET_ARG_IN__("signalHiDuration", unsigned int);
	unsigned int signalLoDuration = __GET_ARG_IN__("signalLoDuration", unsigned int);
	std::string& triggersWereLaunched =
	    getFEMacroArgument(argsOut, "triggersWereLaunched");
	std::string numberOfTriggersStr = __GET_ARG_IN__("numberOfTriggers", std::string);

	__CFG_COUTV__(numberOfTriggers);
	__CFG_COUTV__(signalHiDuration);
	__CFG_COUTV__(signalLoDuration);
	__CFG_COUTV__(numberOfTriggersStr);

	// launch triggers based on parameters...
	{
		std::string writeBuffer;

		// clear bit 5 in 0x18001
		nimEnables_.reset(5);
		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer, addrOffset + 0x18001, nimEnables_.to_ulong());  // enable or disable sig gen
		OtsUDPHardware::write(writeBuffer);
		__CFG_COUT__ << "Nim Enables set to 0x" << std::hex << nimEnables_ << std::dec
		             << std::endl;

		// 3 registers:
		//	count 		0x18005 (27:0)
		//	hi_duration 0x18006 (27:0)
		//	lo_duration 0x18007 (31:0)

		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer, addrOffset + 0x18005, nimEnables_.to_ulong());  // enable or disable sig gen
		OtsUDPHardware::write(writeBuffer);
		__CFG_COUT__ << "Nim Enables set to 0x" << std::hex << nimEnables_ << std::dec
		             << std::endl;

		// Note: select input mux to sig gen
		//	muxInputA 0x108 => 1
		//		B, C, D are on same register shifted up by 3 bits.

		// set bit 5
		nimEnables_.set(5);
		OtsUDPFirmwareCore::writeAdvanced(
		    writeBuffer, addrOffset + 0x18001, numberOfTriggers);  // enable or disable sig gen
		OtsUDPHardware::write(writeBuffer);
		__CFG_COUT__ << "Nim Enables set to 0x" << std::hex << nimEnables_ << std::dec
		             << std::endl;
	}

	__CFG_COUT__ << "triggersWereLaunched " << triggersWereLaunched << __E__;
	triggersWereLaunched = "Done!";
	__CFG_COUT__ << "triggersWereLaunched " << triggersWereLaunched << __E__;
	__SET_ARG_OUT__("triggersWereLaunched", 42.2f);  //,unsigned int);
	__CFG_COUT__ << "triggersWereLaunched " << triggersWereLaunched << __E__;
	__SET_ARG_OUT__("triggersWereLaunched", 42.2f);  //,float);
	__CFG_COUT__ << "triggersWereLaunched " << triggersWereLaunched << __E__;
}

//==============================================================================
void FENIMPlusInterface::changeDACLevelv1(const std::string& channelName, unsigned int dacValue)//Sets DAC values for a Nim+ v1 Board - WILL NOT SET CORRECTLY FOR OTHER VERSIONS, MUST USE SPECIFIC BOARD VERSION FUNCTION!
{
	std::string writeBuffer;
	//16 bit DAC value
	//   - 15:12 channel := 2=A, 6=B, A=C, E=D
	//   - 11:0 value  := 0-3.3V
	std::map<std::string, unsigned int> channelNameToAddressMap;
	channelNameToAddressMap["ChannelA"] = 0x6;
	channelNameToAddressMap["ChannelB"] = 0xe;
	channelNameToAddressMap["ChannelC"] = 0x2;
	channelNameToAddressMap["ChannelD"] = 0xa;
	//NIMPlus V1 - A = 0x2, B = 0x6, C = 0x9, D = 0xE
	//NIMPlus v2 - CH A-H = 0x0-0x7
	const std::string dacValueField = "DACValue";
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x1, /*data*/ 0x0);
	OtsUDPHardware::write(writeBuffer);

	//	__CFG_COUT__ << "DAC NAME:-" << channelName
	//			<< "-has value: " << (int)dacValue
	//			<< std::hex << " hex: " << (unsigned int)dacValue
	//			<< " Writing: " << std::hex << (channelNameToAddressMap[channelName] << 12) | (dacValue & 0xFFF)
	//			<< " only register: " << channelNameToAddressMap[channelName]
	//			<< std::dec
	//			<< std::endl;
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x0, /*data*/ (channelNameToAddressMap[channelName] << 12) | (dacValue & 0xFFF));
	OtsUDPHardware::write(writeBuffer);

	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x1, /*data*/ 0x2);
	OtsUDPHardware::write(writeBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x1, /*data*/ 0x0);
	OtsUDPHardware::write(writeBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x1, /*data*/ 0x4);
	OtsUDPHardware::write(writeBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x1, /*data*/ 0x0);
	OtsUDPHardware::write(writeBuffer);
	//sleep(1); // give a little time to the slow DAC ASIC write

}

//========================================================================================================================
void FENIMPlusInterface::changeDACLevelv2(const std::string& channelName, unsigned int dacValue)//Sets DAC values for a Nim+ v2 Board - WILL NOT SET CORRECTLY FOR OTHER VERSIONS, MUST USE SPECIFIC BOARD VERSION FUNCTION!
{
	std::string writeBuffer;
	//16 bit DAC value
	//   - 15:12 channel := 2=A, 6=B, A=C, E=D
	//   - 11:0 value  := 0-3.3V
	std::map<std::string, unsigned int> channelNameToAddressMap;
	//channelNameToAddressMap["ChannelA"] = 0x6;
	//channelNameToAddressMap["ChannelB"] = 0xe;
	//channelNameToAddressMap["ChannelC"] = 0x2;
	//channelNameToAddressMap["ChannelD"] = 0xa;
	//NIMPlus V1 - A = 0x2, B = 0x6, C = 0x9, D = 0xE
	//NIMPlus v2 - CH A-H = 0x0-0x7
	channelNameToAddressMap["ChannelA"] = 0x7;//0x7
	channelNameToAddressMap["ChannelB"] = 0x5;//0x3
	channelNameToAddressMap["ChannelC"] = 0x3;//0x6
	channelNameToAddressMap["ChannelD"] = 0x1;//0x2
	channelNameToAddressMap["ChannelE"] = 0x6;//0x5
	channelNameToAddressMap["ChannelF"] = 0x4;//0x1
	channelNameToAddressMap["ChannelG"] = 0x2;//0x4
	channelNameToAddressMap["ChannelH"] = 0x0;//0x0
	const std::string dacValueField = "DACValue";
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x1, /*data*/ 0x0);
	OtsUDPHardware::write(writeBuffer);

	//	__CFG_COUT__ << "DAC NAME:-" << channelName
	//			<< "-has value: " << (int)dacValue
	//			<< std::hex << " hex: " << (unsigned int)dacValue
	//			<< " Writing: " << std::hex << (channelNameToAddressMap[channelName] << 12) | (dacValue & 0xFFF)
	//			<< " only register: " << channelNameToAddressMap[channelName]
	//			<< std::dec
	//			<< std::endl;
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x0, /*data*/ (channelNameToAddressMap[channelName] << 12) | (dacValue & 0xFFF));
	OtsUDPHardware::write(writeBuffer);

	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x1, /*data*/ 0x2);
	OtsUDPHardware::write(writeBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x1, /*data*/ 0x0);
	OtsUDPHardware::write(writeBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x1, /*data*/ 0x4);
	OtsUDPHardware::write(writeBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x1, /*data*/ 0x0);
	OtsUDPHardware::write(writeBuffer);
	//sleep(1); // give a little time to the slow DAC ASIC write

}

//========================================================================================================================
void FENIMPlusInterface::initDAC(void)
{
	std::string writeBuffer;
	
  	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x0, /*data*/ 0xF000); //Reset Chip
	OtsUDPHardware::write(writeBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x1, /*data*/ 0x2);
	OtsUDPHardware::write(writeBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x1, /*data*/ 0x0);
	OtsUDPHardware::write(writeBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x1, /*data*/ 0x4);
	OtsUDPHardware::write(writeBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x1, /*data*/ 0x0);
	OtsUDPHardware::write(writeBuffer);
	
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x0, /*data*/ 0x8003); //Set VDD as Ref
	OtsUDPHardware::write(writeBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x1, /*data*/ 0x2);
	OtsUDPHardware::write(writeBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x1, /*data*/ 0x0);
	OtsUDPHardware::write(writeBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x1, /*data*/ 0x4);
	OtsUDPHardware::write(writeBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x1, /*data*/ 0x0);
	OtsUDPHardware::write(writeBuffer);
	
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x0, /*data*/ 0xA001); //LPAC High
	OtsUDPHardware::write(writeBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x1, /*data*/ 0x2);
	OtsUDPHardware::write(writeBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x1, /*data*/ 0x0);
	OtsUDPHardware::write(writeBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x1, /*data*/ 0x4);
	OtsUDPHardware::write(writeBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, /*address*/ addrOffset + 0x1, /*data*/ 0x0);
	OtsUDPHardware::write(writeBuffer);
}

//========================================================================================================================
void FENIMPlusInterface::configureSignalGenerator(
		unsigned int signalGeneratorPulseCount
		, unsigned int signalGeneratorHighPeriod
		, unsigned int signalGeneratorLowPeriod
		, bool signalGeneratorInvertPolarity)
{
	stopSignalGenerator();
	__CFG_COUT__ << "Resets all for sig gen!" << std::endl;

	//signal generator setup
	std::string writeBuffer;
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18005, signalGeneratorPulseCount); //sig gen pulse count
	OtsUDPHardware::write(writeBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18006, signalGeneratorHighPeriod); //sig gen high per
	OtsUDPHardware::write(writeBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18007, signalGeneratorLowPeriod); //sig gen low per
	OtsUDPHardware::write(writeBuffer);
	writeBuffer.resize(0);
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x1800D, (signalGeneratorInvertPolarity?1:0)); //sig gen polarity
	OtsUDPHardware::write(writeBuffer);
}

//========================================================================================================================
void FENIMPlusInterface::startSignalGenerator(void)
{
	std::string writeBuffer;
	nimResets_.set(5); //set bit 5 in resets to 1 to force a sig gen reset
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18000, nimResets_.to_ulong()); //reset sig gen
	OtsUDPHardware::write(writeBuffer);

	nimResets_.reset(5); //set bit 5 in resets to 0 to start pulses!
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18000, nimResets_.to_ulong()); //reset sig gen
	OtsUDPHardware::write(writeBuffer);
}

//========================================================================================================================
void FENIMPlusInterface::stopSignalGenerator (void)
{
	nimResets_.set(5); //set bit 5 in resets to 1 to force a sig gen reset
	std::string writeBuffer;
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18000, nimResets_.to_ulong()); //reset sig gen
	OtsUDPHardware::write(writeBuffer);
}

//========================================================================================================================
void FENIMPlusInterface::enableSignalGenerator(bool enable)
{
	if(enable)
		nimEnables_.set(5); //set bit 5 in enables to 1 to enable sig gen
	else
		nimEnables_.reset(5); //set bit 5 in enables to 1 to enable sig gen

	std::string writeBuffer;
	OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18001, nimEnables_.to_ulong()); //enable or disable sig gen
	OtsUDPHardware::write(writeBuffer);
}

//========================================================================================================================
unsigned int FENIMPlusInterface::selectOutputChannelSource(unsigned int value)
{
	//The register accepts 0 for SigLog, 1 for SigNorm
	//Is default which we assume to be SigLog
	//If the configuration value is 1 = SigLog  => register value = 0
	//If the configuration value is 2 = SigNorm => register value = 1
	//If the configuration value is 3 = SignalGenerator => register value = 2
	if(value > 0)
		return value-1;
	return value;
}

//========================================================================================================================
void FENIMPlusInterface::sendPatternTrigger(uint64_t patternToSend, std::string channelName)
{

	ConfigurationTree optionalLink = theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode("LinkToOptionalParameters");
	bool usingOptionalParams = !optionalLink.isDisconnected();
	if(!usingOptionalParams) return;

	__CFG_COUT__ << "Setting up output channels..." << std::endl;
	//there are 3 output channels (alias: signorm, sigcms1, sigcms2)
	unsigned int channelNumber = 0;
	for(const auto &tmpChannelName : outChannelNames_)
	{
		if(channelName == tmpChannelName) break;
		++channelNumber;
	}
	__CFG_COUT__ << "Channel: " << channelName << " is  number " << channelNumber << std::endl;

	std::string writeBuffer;
	try
	{
		//select signal generator (0x80 for sigNorm)
		if(channelNumber == 0)
		{
			//WARNING IF YOU SET A PATTERN ON SIGNORM THEN YOU RESET THE EVENTUAL PATTERN ON
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18018, 0x80);
			OtsUDPHardware::write(writeBuffer);
		}
		else
		{
			OtsUDPFirmwareCore::writeAdvanced(writeBuffer, (0x18018 + channelNumber - 1), 0x2);
			OtsUDPHardware::write(writeBuffer);
		}
		//setting the pattern to be send out
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, channelNumber==0?0x2:(0x18002 + channelNumber - 1), patternToSend);
		OtsUDPHardware::write(writeBuffer);
		__CFG_COUT__ << "Output word for " << channelName << " is " << std::bitset<64>(patternToSend) << std::endl;

		configureSignalGenerator(1,2,2,true);
		enableSignalGenerator(true);
		startSignalGenerator();
		stopSignalGenerator();
		enableSignalGenerator(false);


		//Restore channels to their configuration values
		unsigned int tmpChannelNumber = 0;
		for(const auto &tmpChannelName : outChannelNames_)
		{
			unsigned int outputChannelSourceSelect = selectOutputChannelSource(theXDAQContextConfigTree_.getNode(theConfigurationPath_).getNode(
					"TriggerInput" + channelName).getValue<unsigned int>()); //0: sig_log   or    1: sig_norm/ch0
			if(tmpChannelNumber == 0)
			{
				OtsUDPFirmwareCore::writeAdvanced(writeBuffer, 0x18018, 0x0);
				OtsUDPHardware::write(writeBuffer);
				__CFG_COUT__ << "Output channel select for " << tmpChannelName << " is " << std::hex << 0 << std::dec << std::endl;
			}
			else
			{
				OtsUDPFirmwareCore::writeAdvanced(writeBuffer, (0x18018 + channelNumber - 1), outputChannelSourceSelect);
				OtsUDPHardware::write(writeBuffer);
				__CFG_COUT__ << "Output channel select for " << tmpChannelName << " is " << std::hex << outputChannelSourceSelect << std::dec << std::endl;
			}
			++tmpChannelNumber;
		}

		uint64_t outputWidth = optionalLink.getNode("WidthTriggerOutput" + channelName).getValue<uint64_t>();
		uint64_t outputModMask;
		unsigned int outputDelay     = optionalLink.getNode("DelayTriggerOutput" + channelName).getValue<unsigned int>();
		unsigned int outputWidthMask = 0;

		if(outputWidth != 0)
		{
			if(outputWidth > 64)
				outputWidthMask = 64;
			else
			{
				outputWidthMask = outputWidth;
				outputWidth = 0;
			}
			outputModMask = (0xFFFFFFFFFFFFFFFF >> (64-outputWidthMask)) << outputDelay;
		}
		else //outputWidth == 0
			outputModMask = 0; //disables output!
		__CFG_COUT__ << std::hex << "CHANNEL: " << channelName << " OUTPUT MASK: " << outputModMask <<  std::dec << std::endl;
		//THIS IS DONE IN CASE YOU WANT TO HAVE A PATTERN AND WORKED FOR THE STRIP TELESCOPE WHEN RUNNING ON KC705
		// if(channelName == "Channel1")
		// 	outputModMask = 0xFFF000FFF;
		
		//set output channel back to its default
		OtsUDPFirmwareCore::writeAdvanced(writeBuffer, channelNumber==0?0x2:(0x18002 + channelNumber - 1), outputModMask);
		OtsUDPHardware::write(writeBuffer);
		__CFG_COUT__ << "Writing back pattern for " << channelName << " is " << std::hex << outputModMask << std::dec << std::endl;

		//Signal Generator configuration
		if (false && optionalLink.getNode("SignalGeneratorEnable").getValue<bool>())
		{
			configureSignalGenerator(
					optionalLink.getNode  ("SignalGeneratorPulseCount")    .getValue<unsigned int>()
					, optionalLink.getNode("SignalGeneratorHighPeriod")    .getValue<unsigned int>()
					, optionalLink.getNode("SignalGeneratorLowPeriod")     .getValue<unsigned int>()
					, optionalLink.getNode("SignalGeneratorInvertPolarity").getValue<bool>()
			);

			__CFG_COUT__
			<< "Configured signal generator with a count of " << optionalLink.getNode("SignalGeneratorPulseCount").getValue<unsigned int>()
			<< " (0 is continuous output), a high period of " << optionalLink.getNode("SignalGeneratorHighPeriod").getValue<unsigned int>()
			<< ", a low period of " <<  optionalLink.getNode("SignalGeneratorLowPeriod").getValue<unsigned int>()
			<< ", and output inversion set to " << optionalLink.getNode("SignalGeneratorInvertPolarity").getValue<bool>()
			<< std::endl;

			enableSignalGenerator(true);
			__CFG_COUT__ << "Signal Generator enabled" << std::endl;
		}
		else
		{
			enableSignalGenerator(false);
			__CFG_COUT__ << "Signal Generator disabled" << std::endl;
		}
	}
	catch(const std::runtime_error &e)
	{
		__CFG_COUT__ << "Failed to send trigger pattern pulse!\n" << e.what() << std::endl;
		throw;
	}
}


DEFINE_OTS_INTERFACE(FENIMPlusInterface)
