

simple_plugin(BurstDataAndTimeSaverConsumer "processor"
	DataManager
	${CETLIB}
	WorkLoopManager
  )
  
# simple_plugin(NimStreamConsumer "processor"
# 	Configurable
# 	DataManager
# 	${CETLIB}
# 	WorkLoopManager
# 	${MF_MESSAGELOGGER}
# 	Visualization
#   )  



install_headers()
install_source()
