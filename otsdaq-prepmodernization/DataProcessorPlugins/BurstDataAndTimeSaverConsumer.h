#ifndef _ots_BurstDataAndTimeSaverConsumer_h_
#define _ots_BurstDataAndTimeSaverConsumer_h_

//This is the basic example of a raw data saver plugin.
//It can be used as is and it will save the data taken from a buffer in binary format without adding anything extra.
//If you are planning on specializing any methods you should inherit from BurstDataAndTimeSaverConsumerBase the same way this consumer is doing.

#include "otsdaq-core/DataManager/RawDataSaverConsumerBase.h"

namespace ots
{
class BurstDataAndTimeSaverConsumer : public RawDataSaverConsumerBase
{
  public:
	BurstDataAndTimeSaverConsumer (std::string supervisorApplicationUID, std::string bufferUID, std::string processorUID, const ConfigurationTree& theXDAQContextConfigTree, const std::string& configurationPath);
	virtual ~BurstDataAndTimeSaverConsumer (void);

  protected:
	void writePacketHeader (const std::string& data) override;
};
}

#endif
