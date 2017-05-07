#include "otsdaq-prepmodernization/FEInterfaces/FENIMPlusInterface.h"
#include "otsdaq-components/UserConfigurationDataFormats/FENIMPlusInterfaceConfiguration.h"
#include "otsdaq-core/MessageFacility/MessageFacility.h"
#include "otsdaq-core/Macros/CoutHeaderMacros.h"
#include "otsdaq-core/Macros/InterfacePluginMacros.h"

#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <set>
#include <string.h>


using namespace ots;

//========================================================================================================================

FENIMPlusInterface::FENIMPlusInterface(const std::string& interfaceUID, const ConfigurationTree& theXDAQContextConfigTree, const std::string& interfaceConfigurationPath)
:Socket            (
		theXDAQContextConfigTree.getNode(interfaceConfigurationPath).getNode("HostIPAddress").getValue<std::string>()
	   ,theXDAQContextConfigTree.getNode(interfaceConfigurationPath).getNode("HostPort").getValue<unsigned int>())
,FEVInterface      (interfaceUID, theXDAQContextConfigTree, interfaceConfigurationPath)
,OtsUDPHardware    (theXDAQContextConfigTree.getNode(interfaceConfigurationPath).getNode("InterfaceIPAddress").getValue<std::string>()
				   ,theXDAQContextConfigTree.getNode(interfaceConfigurationPath).getNode("InterfacePort").getValue<unsigned int>())
,OtsUDPFirmware      (theXDAQContextConfigTree.getNode(interfaceConfigurationPath).getNode("FirmwareVersion").getValue<unsigned int>(), "OtsFirmwareCore")
{}

//========================================================================================================================
FENIMPlusInterface::~FENIMPlusInterface(void)
{}

//========================================================================================================================
void FENIMPlusInterface::configure(void)
{
  std::cout << __COUT_HDR_FL__ << "Hi Dennis configure" << __COUT_HDR__ << std::endl;
//  std::string buffer;
//
//  //OtsUDPFirmware::writeBurstDestinationIP(buffer, inet_network(theConfiguration_->getStreamingIPAddress(FEVInterface::getInterfaceID()).c_str()));
//  OtsUDPHardware::write(buffer);
//  //readBurstDestinationIP();
//
//  buffer.clear();
//  OtsUDPFirmware::writeBurstDestinationMAC(buffer, 0xe03f497d29c4);
//  OtsUDPHardware::write(buffer);
//  //readBurstDestinationMAC();
//
//  buffer.clear();
//  //	writeBurstDestinationPort(buffer, 47000);
//  //OtsUDPFirmware::writeBurstDestinationPort(buffer, theConfiguration_->getStreamingPort(FEVInterface::getInterfaceID()));
//  OtsUDPHardware::write(buffer);
//  //	readBurstDestinationPort();
//
//  uint64_t numberOfWords = -1;
//  OtsUDPFirmware::setNumberOfBurstWords(buffer, numberOfWords);
//  OtsUDPHardware::write(buffer);
//
//  OtsUDPFirmware::setBurstWordsRate(buffer, 0x100000);
//  OtsUDPHardware::write(buffer);

}

//========================================================================================================================
void FENIMPlusInterface::halt(void)
{
  std::cout << __COUT_HDR_FL__ << "\tHalt" << std::endl;
}

//========================================================================================================================
void FENIMPlusInterface::pause(void)
{
  std::cout << __COUT_HDR_FL__ << "\tPause" << std::endl;
}

//========================================================================================================================
void FENIMPlusInterface::resume(void)
{
  std::cout << __COUT_HDR_FL__ << "\tResume" << std::endl;
}

//========================================================================================================================
void FENIMPlusInterface::start(std::string runNumber)
{
  std::cout << __COUT_HDR_FL__ << "\tStart Run Number: " << runNumber<< std::endl;
  OtsUDPHardware::write(OtsUDPFirmware::startBurst());
}

//========================================================================================================================
void FENIMPlusInterface::stop(void)
{
  std::cout << __COUT_HDR_FL__ << "dennis says " << __COUT_HDR__ << "\tStop" << std::endl;
  OtsUDPHardware::write(OtsUDPFirmware::stopBurst());
}

//========================================================================================================================
int FENIMPlusInterface::universalRead(char* address, char* readValue)
{
      std::cout << __COUT_HDR_FL__ << "NIMPlus is Reading!!!" << std::endl;
//      *readValue = '6';
//      std::cout << __COUT_HDR_FL__ << "Everything ok?" << std::endl;
      return 0;

}

//========================================================================================================================
void FENIMPlusInterface::universalWrite(char* address, char* writeValue)
{
	  std::cout << __COUT_HDR_FL__ << "NIMPlus is Writing!!!" << std::endl;
}



DEFINE_OTS_INTERFACE(FENIMPlusInterface)
