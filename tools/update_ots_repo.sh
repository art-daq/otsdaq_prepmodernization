#!/bin/bash
# Update script for the PREPModernization Repo
# Updates database files if they've been updated



if [[ "$(cp -uv $OTSDAQ_DIR/../otsdaq_prepmodernization/Data/ConfigurationInfo/FENIMPlusInterfaceConfigurationInfo.xml	$USER_DATA/ConfigurationInfo/FENIMPlusInterfaceConfigurationInfo.xml)" =~ \-\> ]]; 
then
  echo "Successfully Updated FENIMPlusConfiguration Table" | tee $OTSDAQ_DIR/../../script_log/install_ots_repo.sh.script; 
else 
  echo "FENIMPlusConfiguration table not updated." | tee $OTSDAQ_DIR/../../script_log/install_ots_repo.sh.script; 
fi

if [[ "$(cp -uv $OTSDAQ_DIR/../otsdaq_prepmodernization/Data/ConfigurationInfo/FENIMPlusInterfaceOptionalConfigurationInfo.xml	$USER_DATA/ConfigurationInfo/FENIMPlusInterfaceOptionalConfigurationInfo.xml)" =~ \-\> ]]; 
then
  echo "Successfully Updated FENIMPlusOptionalConfiguration Table" | tee $OTSDAQ_DIR/../../script_log/install_ots_repo.sh.script;  
else 
  echo "FENIMPlusOptionalConfiguration table not updated." | tee $OTSDAQ_DIR/../../script_log/install_ots_repo.sh.script;  
fi




