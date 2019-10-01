#include "otsdaq-prepmodernization/DataProcessorPlugins/NimStreamConsumer.h"

#include "otsdaq/Macros/CoutMacros.h"
#include "otsdaq/Macros/ProcessorPluginMacros.h"
#include "otsdaq/MessageFacility/MessageFacility.h"

using namespace ots;

//========================================================================================================================
NimStreamConsumer::NimStreamConsumer(std::string              supervisorApplicationUID,
                                     std::string              bufferUID,
                                     std::string              processorUID,
                                     const ConfigurationTree& theXDAQContextConfigTree,
                                     const std::string&       configurationPath)
    : WorkLoop(processorUID)
    , VisualVConsumer(supervisorApplicationUID,
                      bufferUID,
                      processorUID,
                      theXDAQContextConfigTree,
                      configurationPath)
//, DataConsumer(supervisorApplicationUID, bufferUID, processorUID, LowConsumerPriority)
//, Configurable(theXDAQContextConfigTree, configurationPath)
{
}

//========================================================================================================================
NimStreamConsumer::~NimStreamConsumer(void) { timeline.clear(); }

//========================================================================================================================
// void NimStreamConsumer::startProcessingData(std::string runNumber)
// {
// 	DataConsumer::startProcessingData(runNumber);
// }
//
// //========================================================================================================================
// void NimStreamConsumer::stopProcessingData(void)
// {
// 	DataConsumer::stopProcessingData();
// }

//========================================================================================================================
bool NimStreamConsumer::workLoopThread(toolbox::task::WorkLoop* workLoop)
{
	//__MOUT__ << DataProcessor::processorUID_ << " running, because workloop: " <<
	// WorkLoop::continueWorkLoop_ << std::endl;
	slowRead();  // fastRead();

	timeline_pt            newPt;
	unsigned long long int data_int = 0;
	int                    pos      = 0;
	__COUT__ << data_str.length() << __E__;
	while((data_str.length() >= 64))
	{
		std::string word = data_str.substr(pos, 64);
		__COUT__ << "Word Len: " << word.length() << __E__;
		__COUT__ << "data_str len: " << sizeof(data_int) << __E__;
		memcpy(&data_int, &word, 64);
		//__COUT__ << data_ << __E__;
		newPt.timestamp = (data_int & 0x0000FFFFFFFF0000) >> 2;  // One Quadword, Mask out
		                                                         // header and state data
		                                                         // #TODO VERIFY THAT
		                                                         // TIMESTAMP IS 32b
		newPt.y_0 = (data_int & 0x0000000000000010) >> 1;        // Get y0
		newPt.y_1 = (data_int & 0x0000000000000020) >> 1;        // Get y1
		newPt.y_2 = (data_int & 0x0000000000000040) >> 1;        // Get y2
		newPt.y_3 = (data_int & 0x0000000000000080) >> 1;        // Get y3
		timeline.push_back(newPt);
		__COUT__ << newPt.timestamp << __E__;
		//__COUT__ << data_int << __E__;
		data_str.erase(pos, pos + 64);
		__COUT__ << "Erase Successful" << __E__;
		// pos += 64;
		// data_int = 0;
	}

	return WorkLoop::continueWorkLoop_;
}

//========================================================================================================================
void NimStreamConsumer::fastRead(void)
{
	__MOUT__ << processorUID_ << " running!" << std::endl;
	// This is making a copy!!!
	if(DataConsumer::read(dataP_, headerP_) < 0)
	{
		usleep(100);
		return;
	}
	__MOUT__ << DataProcessor::processorUID_ << " UID: " << supervisorApplicationUID_
	         << std::endl;

	// HW emulator
	//	 Burst Type | Sequence | 8B data
	__MOUT__ << "Size fill: " << dataP_->length() << std::endl;

	DataConsumer::setReadSubBuffer<std::string, std::map<std::string, std::string>>();
}

//========================================================================================================================
void NimStreamConsumer::slowRead(void)
{
	__MOUT__ << DataProcessor::processorUID_ << " running!" << std::endl;
	// This is making a copy!!!
	if(DataConsumer::read(data_, header_) < 0)
	{
		usleep(1000);
		return;
	}
	else
	{
		__COUT__ << "Size of data_; " << data_.length()
		         << " Size of data_str: " << data_str.length() << __E__;
		//__COUT__ << "data_: " << data_ << __E__;
		//__COUT__ << "data_str: " << data_str << __E__;
		data_str = data_str + data_;
	}
	__MOUT__ << DataProcessor::processorUID_ << " UID: " << supervisorApplicationUID_
	         << std::endl;
}
//=========================================================================================================================
std::string NimStreamConsumer::getNext(std::map<std::string, std::string> args)
{
	timeline_pt              closePt;
	std::vector<timeline_pt> retPts;
	int                      retCtr    = stoi(args["count"]);
	int                      timestamp = stoi(args["timestamp"]);
	int                      toTimestamp;
	std::string              retStr = "{ ";
	std::string              y0Str  = "\" y0 \" : \"";
	std::string              y1Str  = "\" y1 \" : \"";
	std::string              y2Str  = "\" y2 \" : \"";
	std::string              y3Str  = "\" y3 \" : \"";
	std::string              tsStr  = "\" timestamp \" : \"";
	// Find the closest timestamp and return up to "count" timestamp points via vector for
	// the VisualDataManager to interpret and send to the js frontend
	if(timeline.size() > 0)
	{
		for(const auto& cPt : timeline)
		{
			if(cPt.timestamp <= (timestamp + retCtr))
			{
				if(cPt.timestamp >= timestamp)
				{
					retPts.push_back(cPt);
				}
			}
			else
			{
				break;
			}
		}
		for(const auto& pt : retPts)
		{
			try
			{
				timeline_pt tmpPt = *(&pt + 1);
				toTimestamp       = tmpPt.timestamp;
				__COUT__ << toTimestamp << __E__;
			}
			catch(...)
			{
				toTimestamp = timestamp + retCtr;
				__COUT__ << toTimestamp << __E__;
			}

			for(int k = pt.timestamp; k < toTimestamp; k++)
			{
				y0Str += std::to_string(pt.y_0);
				y1Str += std::to_string(pt.y_1);
				y2Str += std::to_string(pt.y_2);
				y3Str += std::to_string(pt.y_3);
				tsStr += std::to_string(pt.timestamp);
			}
			y0Str += "\",";
			y1Str += "\",";
			y2Str += "\",";
			y3Str += "\",";
			tsStr += "\"";
			retStr += ("{" + y0Str + y1Str + y2Str + y3Str + tsStr + " }");
		};
		retStr += "}";
		__COUT__ << retStr << __E__;
	}
	else
	{
		retStr = "No Entries in timeline!";
	}

	return retStr;
}

DEFINE_OTS_PROCESSOR(NimStreamConsumer)
