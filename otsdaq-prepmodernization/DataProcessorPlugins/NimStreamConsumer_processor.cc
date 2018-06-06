#include "otsdaq-prepmodernization/DataProcessorPlugins/NimStreamConsumer.h"

#include "otsdaq-core/MessageFacility/MessageFacility.h"
#include "otsdaq-core/Macros/CoutMacros.h"
#include "otsdaq-core/Macros/ProcessorPluginMacros.h"

using namespace ots;


//========================================================================================================================
NimStreamConsumer::NimStreamConsumer(std::string supervisorApplicationUID, std::string bufferUID, std::string processorUID, const ConfigurationTree& theXDAQContextConfigTree, const std::string& configurationPath)
: WorkLoop(processorUID) 
, DataConsumer(supervisorApplicationUID, bufferUID, processorUID, LowConsumerPriority)
, Configurable(theXDAQContextConfigTree, configurationPath)
{
}

//========================================================================================================================
NimStreamConsumer::~NimStreamConsumer(void)
{
	timeline.clear();
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
	slowRead();//fastRead();
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
	else{
	      struct timeline_pt newPt;
	      newPt.timestamp = (data_ & 0x0000FFFFFFFF0000) >> 2 //One Quadword, Mask out header and state data #TODO VERIFY THAT TIMESTAMP IS 32b
	      newPt.y_0 = (data_ & 0x0000000000000010) >> 1; //Get y0 
	      newPt.y_1 = (data_ & 0x0000000000000020) >> 1; //Get y1 
	      newPt.y_2 = (data_ & 0x0000000000000040) >> 1; //Get y2 
	      newPt.y_3 = (data_ & 0x0000000000000080) >> 1; //Get y3 
	      timeline.push_back(newPt);  
	}
	__MOUT__ << DataProcessor::processorUID_ << " UID: " << supervisorApplicationUID_ << std::endl;
}
//=========================================================================================================================
const std::vector<timeline_pt> NimStreamConsumer::getTimelineData(int timestamp,int count){
  struct timeline closePt;
  std::vector<timeline_pt> retPts;
  int retCtr = count;
  //Find the closest timestamp and return up to "count" timestamp points via vector for the VisualDataManager to interpret and send to the js frontend 
  for(int j=0; j<timeline.size();j++){
      struct timeline cPt = timeline[j];
      if(retCtr > 0){
	  if(cPt.timestamp >= timestamp){
	    retPts.push_back(cPt);
	    retCtr--;
	  }
      }
      else{
	  break;
      }
  }
 return retPts;
  
};

DEFINE_OTS_PROCESSOR(NimStreamConsumer)
