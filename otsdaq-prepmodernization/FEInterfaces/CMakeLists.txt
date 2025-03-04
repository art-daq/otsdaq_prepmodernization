 include(otsdaq::FEInterface)
 
 cet_build_plugin(FENIMPlusInterface otsdaq::FEInterface	LIBRARIES REG otsdaq-components::FEOtsUDPTemplateInterface)

cet_build_plugin(FENIMPlusInterfaceV1 otsdaq::FEInterface LIBRARIES REG otsdaq-components::FEOtsUDPTemplateInterface)

install_headers()
install_source()
