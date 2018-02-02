#!/bin/bash
# Update script for the PREPModernization Repo
# Updates database files if they've been updated, checks if entry for FENIMPlusInterface exists in the FEINTERfaceConfigurationInfo table
# and adds the entry if it doesn't



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

if grep -Fq "FENIMPlusInterface" $USER_DATA/ConfigurationInfo/FEInterfaceConfigurationInfo.xml
then
    echo "Entry for 'FENIMPlusInterface' already exists in FEInterfaceConfigurationInfo, not adding" | tee $OTSDAQ_DIR/../../script_log/install_ots_repo.sh.script;  
else
    echo "Entry for 'FENIMPlusInterface' does NOT exist in FEInterfaceConfigurationInfo, adding to FEInterfacePluginName" | tee $OTSDAQ_DIR/../../script_log/install_ots_repo.sh.script;  
    sed -i -e 's/Interface"\/>/Interface,FENIMPlusInterface"\/>/' $USER_DATA/ConfigurationInfo/FEInterfaceConfigurationInfo.xml
fi

UPDATE_DATE=$(date '+%Y-%m-%d %H:%M:%S')
echo >> ${MRB_SOURCE}/otsdaq_prepmodernization/prepmodenization_installed
echo "prepmodenization repo updated on: " >> ${MRB_SOURCE}/otsdaq_prepmodernization/prepmodenization_installed
echo ${UPDATE_DATE} >> ${MRB_SOURCE}/otsdaq_prepmodernization/prepmodenization_installed
  