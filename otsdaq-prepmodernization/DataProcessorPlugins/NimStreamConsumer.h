#ifndef _ots_NimStreamConsumer_h_
#define _ots_NimStreamConsumer_h_

//#include "otsdaq-core/DataManager/DQMHistosConsumerBase.h"
#include "otsdaq-core/DataManager/DataConsumer.h"
#include "otsdaq-core/ConfigurationInterface/Configurable.h"

#include <string>

namespace ots
{

  class ConfigurationManager;

class NimStreamConsumer : public DataConsumer, public Configurable
{
public:
NimStreamConsumer(std::string supervisorApplicationUID, std::string bufferUID, std::string processorUID, const ConfigurationTree& theXDAQContextConfigTree, const std::string& configurationPath);

virtual ~NimStreamConsumer(void);

	void startProcessingData(std::string runNumber) override;
	void stopProcessingData (void) override;

private:
	bool workLoopThread(toolbox::task::WorkLoop* workLoop);
	void fastRead(void);
	void slowRead(void);
	
	
	//For fast read
	std::string*                       dataP_;
	std::map<std::string,std::string>* headerP_;
	//For slow read
	std::string                        data_;
	std::map<std::string,std::string>  header_;


};
}

#endif
