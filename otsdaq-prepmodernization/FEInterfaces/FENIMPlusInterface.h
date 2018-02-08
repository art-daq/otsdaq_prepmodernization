#ifndef _ots_FENIMPlusInterface_h_
#define _ots_FENIMPlusInterface_h_

#include "otsdaq-components/FEInterfaces/FEOtsUDPTemplateInterface.h"

namespace ots
{
class FEInterfaceConfigurationBase;
class FENIMPlusInterfaceConfiguration;

class FENIMPlusInterface : public FEOtsUDPTemplateInterface
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



    /////////////////////////////////////
    //start declaration of FE Macros

    void FEMacroGenerateTriggers			(frontEndMacroInArgs_t argsIn, frontEndMacroOutArgs_t argsOut);

    //end declaration of FE Macros
    /////////////////////////////////////

private:

    std::string 			runNumber_;
	uint64_t 				sel_ctl_register_;
};

}

#endif
