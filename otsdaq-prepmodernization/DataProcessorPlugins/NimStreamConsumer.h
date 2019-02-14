#ifndef _ots_NimStreamConsumer_h_
#define _ots_NimStreamConsumer_h_

//#include "otsdaq-core/DataManager/DataConsumer.h"
//#include "otsdaq-core/Configurable/Configurable.h"
#include "otsdaq-utilities/Visualization/VisualVConsumer.h"



#include <string>
#include <vector>


namespace ots
{

//  class ConfigurationManager;

class NimStreamConsumer : public VisualVConsumer
{
public:
	NimStreamConsumer(std::string supervisorApplicationUID, std::string bufferUID, std::string processorUID, const ConfigurationTree& theXDAQContextConfigTree, const std::string& configurationPath);
	virtual ~NimStreamConsumer(void);
	
	virtual  std::string getNext(std::map<std::string,std::string>);
	
	//structure to hold state change data
	struct timeline_pt{
	    int timestamp;
	    int y_0;
	    int y_1;
	    int y_2;
	    int y_3;
	};

	//Timeline of state change data
	std::vector<timeline_pt>	 timeline;
	
	const std::vector<std::string> getTimelineData(int timestamp,int count);

	
private:
	bool workLoopThread(toolbox::task::WorkLoop* workLoop) override;
	void fastRead(void) override;
	void slowRead(void) override;
	
	
	//For fast read
	std::string*                       dataP_;
	std::map<std::string,std::string>* headerP_;
	//For slow read
	std::string                        data_;
	std::map<std::string,std::string>  header_;
	
	std::string 			   data_str;
};
}

#endif
