#!/bin/bash
# Update script for the PREPModernization Repo
# Updates database files if they've been updated, checks if entry for FENIMPlusInterface exists in the FEInterfaceTableInfo table
# and adds the entry if it doesn't



if [[ "$(cp -uv $OTSDAQ_DIR/../otsdaq_prepmodernization/Data/TableInfo/FENIMPlusInterfaceTableInfo.xml	$USER_DATA/TableInfo/FENIMPlusInterfaceTableInfo.xml)" =~ \-\> ]]; 
then
  echo "Successfully Updated FENIMPlusTable Table" | tee $OTSDAQ_DIR/../../script_log/install_ots_repo.sh.script; 
else 
  echo "FENIMPlusTable table not updated." | tee $OTSDAQ_DIR/../../script_log/install_ots_repo.sh.script; 
fi

if [[ "$(cp -uv $OTSDAQ_DIR/../otsdaq_prepmodernization/Data/TableInfo/FENIMPlusInterfaceOptionalTableInfo.xml	$USER_DATA/TableInfo/FENIMPlusInterfaceOptionalTableInfo.xml)" =~ \-\> ]]; 
then
  echo "Successfully Updated FENIMPlusOptionalTable Table" | tee $OTSDAQ_DIR/../../script_log/install_ots_repo.sh.script;  
else 
  echo "FENIMPlusOptionalTable table not updated." | tee $OTSDAQ_DIR/../../script_log/install_ots_repo.sh.script;  
fi

if grep -Fq "FENIMPlusInterface" $USER_DATA/TableInfo/FEInterfaceTableInfo.xml
then
    echo "Entry for 'FENIMPlusInterface' already exists in FEInterfaceTableInfo, not adding" | tee $OTSDAQ_DIR/../../script_log/install_ots_repo.sh.script;  
else
    echo "Entry for 'FENIMPlusInterface' does NOT exist in FEInterfaceTableInfo, adding to FEInterfacePluginName" | tee $OTSDAQ_DIR/../../script_log/install_ots_repo.sh.script;  
    sed -i -e 's/Interface"\/>/Interface,FENIMPlusInterface"\/>/' $USER_DATA/TableInfo/FEInterfaceTableInfo.xml
fi

UPDATE_DATE=$(date '+%Y-%m-%d %H:%M:%S')
echo >> ${MRB_SOURCE}/otsdaq_prepmodernization/prepmodenization_installed
echo "prepmodenization repo updated on: " >> ${MRB_SOURCE}/otsdaq_prepmodernization/prepmodenization_installed
echo ${UPDATE_DATE} >> ${MRB_SOURCE}/otsdaq_prepmodernization/prepmodenization_installed
  
