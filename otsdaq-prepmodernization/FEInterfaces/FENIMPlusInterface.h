#ifndef _ots_FENIMPlusInterface_h_
#define _ots_FENIMPlusInterface_h_

#include "otsdaq-core/FECore/FEVInterface.h"
#include "otsdaq-components/DAQHardware/OtsUDPHardware.h"
#include "otsdaq-components/DAQHardware/OtsUDPFirmwareDataGen.h"


#include <string>

namespace ots
{
class FEInterfaceConfigurationBase;
class FENIMPlusInterfaceConfiguration;

class FENIMPlusInterface : public FEVInterface, public OtsUDPHardware, public OtsUDPFirmwareDataGen
{

public:
    FENIMPlusInterface     (const std::string& interfaceUID, const ConfigurationTree& theXDAQContextConfigree, const std::string& interfaceConfigurationPath);
    virtual ~FENIMPlusInterface(void);

    void configure        (void) override;
    void halt             (void) override;
    void pause            (void) override;
    void resume           (void) override;
    void start            (std::string runNumber) override;
    bool running          (void) override;
    void stop             (void) override;

    int universalRead	  (char* address, char* readValue) override;
    void universalWrite	  (char* address, char* writeValue) override;

    void runSequenceOfCommands(const std::string &treeLinkName);
    //void configureFEW     (void);
    //void configureDetector(const DACStream& theDACStream) override;

private:
    //void destroy          (void);

    std::string 			runNumber_;
	uint64_t 				sel_ctl_register_;
};

}

#endif
