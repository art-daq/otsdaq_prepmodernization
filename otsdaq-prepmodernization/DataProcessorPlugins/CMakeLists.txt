

simple_plugin(BurstDataAndTimeSaverConsumer "processor"
	DataManager
	${CETLIB}
	WorkLoopManager
  )
  
simple_plugin(NimStreamConsumer "processor"
	DataManager
	${CETLIB}
	WorkLoopManager
  )  



install_headers()
install_source()
