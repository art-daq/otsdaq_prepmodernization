 simple_plugin(FENIMPlusInterface "interface"	
	otsdaq-components_FEInterfaces_FEOtsUDPTemplateInterface_interface
	DAQHardware
	Configurable
	FECore
	WorkLoopManager
	Macros
)

simple_plugin(FENIMPlusInterfaceV1 "interface"
	otsdaq-components_FEInterfaces_FEOtsUDPTemplateInterface_interface
	DAQHardware
	Configurable
	FECore
	WorkLoopManager
	Macros
	TableCore
	ConfigurationInterface
	NetworkUtilities
	artdaq_DAQdata
	${XDAQ_XERCES-C}
	${MF_MESSAGELOGGER}
	${Boost_SYSTEM_LIBRARY}
	pthread
)
