#ifndef _ots_FENIMPlusInterface_h_
#define _ots_FENIMPlusInterface_h_

//#include "otsdaq-components/FEInterfaces/FEOtsUDPHardwareBaseInterface.h"
#include <bitset>
#include "otsdaq-components/FEInterfaces/FEOtsUDPTemplateInterface.h"

namespace ots
{
class FEInterfaceTableBase;
class FENIMPlusInterfaceConfiguration;

class FENIMPlusInterface : public FEOtsUDPTemplateInterface
{
  public:
	FENIMPlusInterface(const std::string&       interfaceUID,
	                   const ConfigurationTree& theXDAQContextConfigree,
	                   const std::string&       interfaceConfigurationPath);
	virtual ~FENIMPlusInterface(void);

	void configure(void) override;
	void halt(void) override;
	void pause(void) override;
	void resume(void) override;
	void start(std::string runNumber) override;
	bool running(void) override;
	void stop(void) override;
	
	void changeDACLevelv1(const std::string& channelName, unsigned int value);
	void changeDACLevelv2(const std::string& channelName, unsigned int value);
	void initDAC(void);		

	/////////////////////////////////////
	// start declaration of FE Macros

	void FEMacroGenerateTriggers(__ARGS__);

	// end declaration of FE Macros
	/////////////////////////////////////

  private:
	std::string runNumber_;
	uint64_t    sel_ctl_register_;
	uint32_t    addrOffset = 0;
	// bitsets for enables and resets
	std::bitset<16> nimResets_, nimEnables_;
};
}

#endif
