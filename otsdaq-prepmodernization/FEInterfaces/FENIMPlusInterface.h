#ifndef _ots_FENIMPlusInterface_h_
#define _ots_FENIMPlusInterface_h_

#include "otsdaq-components/FEInterfaces/FEOtsUDPBaseInterface.h"
#include <bitset>

namespace ots
{
class FEInterfaceConfigurationBase;
class FENIMPlusInterfaceConfiguration;

class FENIMPlusInterface : public FEOtsUDPBaseInterface
{

public:
    FENIMPlusInterface     					(const std::string& interfaceUID, const ConfigurationTree& theXDAQContextConfigree, const std::string& interfaceConfigurationPath);
    virtual ~FENIMPlusInterface				(void);

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

    void FEMacroGenerateTriggers			(frontEndMacroInArgs_t argsIn, frontEndMacroOutArgs_t argsOut);

    //end declaration of FE Macros
    /////////////////////////////////////

private:

    std::string 			runNumber_;
	uint64_t 				sel_ctl_register_;

	//bitsets for enables and resets
	std::bitset<16> 		nimResets_, nimEnables_;
};

}

#endif
