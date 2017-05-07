 simple_plugin(FENIMPlusInterface "interface"
  DAQHardware
  FECore
  WorkLoopManager
  ConfigurationInterface
  ConfigurationDataFormats
  $ENV{XERCES_C_LIB}/libxerces-c.so
  ${CETLIB}
  )
