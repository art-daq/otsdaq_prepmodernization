#ifndef _ots_FENIMPlusInterfaceV1_h_
#define _ots_FENIMPlusInterfaceV1_h_

//#include "otsdaq-components/FEInterfaces/FEOtsUDPHardwareBaseInterface.h"
#include "otsdaq-components/FEInterfaces/FEOtsUDPTemplateInterface.h"
#include <bitset>

namespace ots
{
class FEInterfaceConfigurationBase;
class FENIMPlusInterfaceV1Configuration;

class FENIMPlusInterfaceV1 : public FEOtsUDPTemplateInterface
{

public:
	FENIMPlusInterfaceV1     					(const std::string& interfaceUID, const ConfigurationTree& theXDAQContextConfigree, const std::string& interfaceConfigurationPath);
	virtual ~FENIMPlusInterfaceV1				(void);

	void configure        					(void) override;
	void halt             					(void) override;
	void pause            					(void) override;
	void resume           					(void) override;
	void start            					(std::string runNumber) override;
	bool running          					(void) override;
	void stop             					(void) override;

	void changeDACLevel                     (const std::string& channelName, unsigned int value);



	/////////////////////////////////////
	//start declaration of FE Macros

	void FEMacroGenerateTriggers			(__ARGS__);

	//end declaration of FE Macros
	/////////////////////////////////////

private:
	void configureSignalGenerator(
			unsigned int signalGeneratorPulseCount
			, unsigned int signalGeneratorHighPeriod
			, unsigned int signalGeneratorLowPeriod
			, bool         signalGeneratorInvertPolarity
	);
	void startSignalGenerator     (void);
	void stopSignalGenerator      (void);
	void enableSignalGenerator    (bool enable);

	void         sendPatternTrigger       (uint64_t patternToSend, std::string channelName);
	unsigned int selectOutputChannelSource(unsigned int value);
	std::string 			runNumber_;
	uint64_t 				sel_ctl_register_;

	//bitsets for enables and resets
	std::bitset<16> 		nimResets_, nimEnables_;
	std::array<std::string,3> outChannelNames_ = {"Channel0","Channel1","Channel2"};

};

}

#endif
