#include "otsdaq-prepmodernization/DataProcessorPlugins/BurstDataAndTimeSaverConsumer.h"
#include "otsdaq-core/Macros/ProcessorPluginMacros.h"

using namespace ots;


//========================================================================================================================
BurstDataAndTimeSaverConsumer::BurstDataAndTimeSaverConsumer(std::string supervisorApplicationUID, std::string bufferUID, std::string processorUID, const ConfigurationTree& theXDAQContextConfigTree, const std::string& configurationPath)
: WorkLoop                (processorUID)
, RawDataSaverConsumerBase(supervisorApplicationUID, bufferUID, processorUID, theXDAQContextConfigTree, configurationPath)
{
}

//========================================================================================================================
BurstDataAndTimeSaverConsumer::~BurstDataAndTimeSaverConsumer(void)
{}


//========================================================================================================================
//write header to file before each packet
void BurstDataAndTimeSaverConsumer::writePacketHeader(const std::string& data)
{
	//write
	uint64_t t = time(0);
	outFile_.write((char *)&t,8); //8-byte linux timestamp in seconds

	//data is expected to be 2B (Type, SequenceID) + some number of quadwords
	uint8_t quadWordCount = data.length()/8;
	outFile_.write((char *)&quadWordCount,1); //1-byte quad-word count
}

DEFINE_OTS_PROCESSOR(BurstDataAndTimeSaverConsumer)
