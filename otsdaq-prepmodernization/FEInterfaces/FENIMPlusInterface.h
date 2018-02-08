#ifndef _ots_FENIMPlusInterface_h_
#define _ots_FENIMPlusInterface_h_

#include "otsdaq-components/FEInterfaces/FEOtsUDPTemplateInterface.h"
//#include "otsdaq-core/FECore/FEVInterface.h"
//#include "otsdaq-components/DAQHardware/OtsUDPHardware.h"
//#include "otsdaq-components/DAQHardware/OtsUDPFirmwareDataGen.h"


//#include <string>

namespace ots
{
class FEInterfaceConfigurationBase;
class FENIMPlusInterfaceConfiguration;

class FENIMPlusInterface : public FEOtsUDPTemplateInterface// public FEVInterface, public OtsUDPHardware, public OtsUDPFirmwareDataGen
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

    int universalRead	  					(char* address, char* readValue) override;
    void universalWrite	  					(char* address, char* writeValue) override;


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
