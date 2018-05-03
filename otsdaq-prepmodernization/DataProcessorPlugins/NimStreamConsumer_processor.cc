#include "otsdaq-prepmodernization/DataProcessorPlugins/NimStreamConsumer.h"
#include "otsdaq-core/MessageFacility/MessageFacility.h"
#include "otsdaq-core/Macros/CoutMacros.h"
#include "otsdaq-core/Macros/ProcessorPluginMacros.h"

using namespace ots;


//========================================================================================================================
NimStreamConsumer::NimStreamConsumer(std::string supervisorApplicationUID, std::string bufferUID, std::string processorUID, const ConfigurationTree& theXDAQContextConfigTree, const std::string& configurationPath)
: WorkLoop(processorUID) 
, DataConsumer(supervisorApplicationUID, bufferUID, processorUID, LowConsumerPriority)
, Configurable         (theXDAQContextConfigTree, configurationPath)
{
}

//========================================================================================================================
NimStreamConsumer::~NimStreamConsumer(void)
{

}

//========================================================================================================================
void NimStreamConsumer::startProcessingData(std::string runNumber)
{
	DataConsumer::startProcessingData(runNumber);
}

//========================================================================================================================
void NimStreamConsumer::stopProcessingData(void)
{
	DataConsumer::stopProcessingData();
}

//========================================================================================================================
bool NimStreamConsumer::workLoopThread(toolbox::task::WorkLoop* workLoop)
{
	//__MOUT__ << DataProcessor::processorUID_ << " running, because workloop: " <<
		//WorkLoop::continueWorkLoop_ << std::endl;
	fastRead();
	return WorkLoop::continueWorkLoop_;
}

//========================================================================================================================
void NimStreamConsumer::fastRead(void)
{
	__MOUT__ << processorUID_ << " running!" << std::endl;
	//This is making a copy!!!
	if(DataConsumer::read(dataP_, headerP_) < 0)
	{
		usleep(100);
		return;
	}
	__MOUT__ << DataProcessor::processorUID_ << " UID: " << supervisorApplicationUID_ << std::endl;

	//HW emulator
	//	 Burst Type | Sequence | 8B data
	__MOUT__ << "Size fill: " << dataP_->length() << std::endl;

	DataConsumer::setReadSubBuffer<std::string, std::map<std::string, std::string>>();
}

//========================================================================================================================
void NimStreamConsumer::slowRead(void)
{
	__MOUT__ << DataProcessor::processorUID_ << " running!" << std::endl;
	//This is making a copy!!!
	if(DataConsumer::read(data_, header_) < 0)
	{
		usleep(1000);
		return;
	}
	__MOUT__ << DataProcessor::processorUID_ << " UID: " << supervisorApplicationUID_ << std::endl;
}

DEFINE_OTS_PROCESSOR(NimStreamConsumer)
