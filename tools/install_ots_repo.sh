#!/bin/bash
#Install Prepmodernization into otsdaq


PWD=$(pwd)
if [ ! -e ${MRB_SOURCE}/otsdaq_prepmodernization/prepmodenization_installed ]; then #if it's installing for the first time
  if kdialog --title "Install for Virtual Machine?" --yesno "Are you installing PREPModernization on a Virtual Machine? \n if so, select yes to set up the user data folder."
    then
      progress=$(kdialog --title "Installing PREPModernization Repo" --progressbar "Creating and populating user data folders");
      qdbus $progress Set "" maximum 7 > /dev/null;
      echo "Creating and populating user data folders" >> ${PWD}/script_log/install_ots_repo.sh.script

      #setup data folders for user data and copy example data into them
      mkdir ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitData
      mkdir ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitDatabases
      cp -r ${MRB_SOURCE}/otsdaq_prepmodernization/Data/* ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitData/
      cp -r ${MRB_SOURCE}/otsdaq_prepmodernization/Databases/* ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitDatabases/

      qdbus $progress Set "" value 1 > /dev/null;
      qdbus $progress setLabelText "Modifying OTS Setup Script" > /dev/null;
      echo "Modifying OTS Setup Script, Backup of original located in base otsdaq install directory as setup_ots.sh.bk" >> ${PWD}/script_log/install_ots_repo.sh.script

      #modify setup_ots.sh
      cat setup_ots.sh > setup_ots_repo_temp.sh 
      echo >> setup_ots_repo_temp.sh 
      echo "source ${MRB_SOURCE}/otsdaq_prepmodernization/tools/extra_setup_ots_repo.sh" >> setup_ots_repo_temp.sh
      cp setup_ots.sh setup_ots.sh.bk
      mv setup_ots_repo_temp.sh setup_ots.sh

      qdbus $progress Set "" value 2 > /dev/null;
      qdbus $progress setLabelText "Creating prepmodenization .gitignore file" > /dev/null;
      echo "Creating prepmodenization .gitignore file" >> ${PWD}/script_log/install_ots_repo.sh.script

      #create .gitignore to ignore user data
      touch ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
      echo ".gitignore" >> ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
      echo "NoGitData/" >> ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
      echo "NoGitDatabases/" >> ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
      echo "UserWebGUI/UserWebGUI" >> ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore

      qdbus $progress Set "" value 3 > /dev/null;
      qdbus $progress setLabelText "Unsetting all variables" > /dev/null;
      echo "Unsetting all variables" >> ${PWD}/script_log/install_ots_repo.sh.script

      unsetup_all
      unset "PRODUCTS"

      qdbus $progress Set "" value 4 > /dev/null;
      qdbus $progress setLabelText "Re-Running OTS Setup script" > /dev/null;
      echo "Re-Running OTS Setup script" >> ${PWD}/script_log/install_ots_repo.sh.script

      source setup_ots.sh  

      qdbus $progress Set "" value 5 > /dev/null;
      qdbus $progress setLabelText "Building Prepmodernization and OTS (May Take some time!)" > /dev/null;  
      echo "Building Prepmodernization and OTS (May Take some time!)" >> ${PWD}/script_log/install_ots_repo.sh.script


      MRB_OUTPUT=$(mrb b | tee -a ${PWD}/script_log/install_ots_repo.sh.script | tail -n 3)
      if [[ $MRB_OUTPUT == *"Stage build successful."* ]]; then
	  echo "Successful build detected, continuing install" >> ${PWD}/script_log/install_ots_repo.sh.script
	  qdbus $progress Set "" value 6 > /dev/null;
	  qdbus $progress setLabelText "Build Successful! Creating Symlink for webapp" > /dev/null;  
	  echo "Build Successful! Creating Symlink for webapp" >> ${PWD}/script_log/install_ots_repo.sh.script
	    
	    #create a symlink for our webapp
	    ln -sfn /home/otsdaq/Desktop/otsdaq-v1_01_01/srcs/otsdaq_prepmodernization/UserWebGUI /home/otsdaq/Desktop/otsdaq-v1_01_01/srcs/otsdaq_utilities/WebGUI/UserWebPath
	    touch ${MRB_SOURCE}/otsdaq_prepmodernization/prepmodenization_installed
	    INSTALL_DATE=$(date '+%Y-%m-%d %H:%M:%S')
	    echo "prepmodenization repo installed on: " >> ${MRB_SOURCE}/otsdaq_prepmodernization/prepmodenization_installed
	    echo ${INSTALL_DATE} >> ${MRB_SOURCE}/otsdaq_prepmodernization/prepmodenization_installed
	    
	    echo "otsdaq_prepmodernization" >> ${USER_DATA}/ServiceData/InstalledRepoNames.dat
	    
	    #to add FENIMPlusInterface as an entry to FEInterfaceConfiguration
	    source ${MRB_SOURCE}/otsdaq_prepmodernization/tools/update_ots_repo.sh
	  
	  qdbus $progress Set "" value 7 > /dev/null;
	  qdbus $progress setLabelText "Install Complete!" > /dev/null;  
	  echo "Install Complete!" >> ${PWD}/script_log/install_ots_repo.sh.script
	    sleep 5
	  qdbus $progress close > /dev/null;
	  
	else
	  echo "Failed build detected, aborting install" >> ${PWD}/script_log/install_ots_repo.sh.script
	  qdbus $progress close > /dev/null;
	  kdialog --error "Error encountered while building!\nAborting setup, make sure your VM is configured for your host machine correctly.\nIf the problem persists, contact the OTSDAQ/PREPModernization developers."
	    #Clean up work already done
	    mv setup_ots.sh.bk setup_ots.sh
	    rm -rf ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitData/
	    rm -rf ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitDatabases/
	    rm ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
	    mrb z
	fi
  else 
    progress=$(kdialog --title "Installing PREPModernization Repo" --progressbar "Creating prepmodenization .gitignore file");
      qdbus $progress Set "" maximum 6 > /dev/null;
    
      echo "Creating prepmodenization .gitignore file" >> ${PWD}/script_log/install_ots_repo.sh.script

      #create .gitignore to ignore user data
      touch ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
      echo ".gitignore" >> ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
      echo "UserWebGUI/UserWebGUI" >> ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore

      qdbus $progress Set "" value 2 > /dev/null;
      qdbus $progress setLabelText "Unsetting all variables" > /dev/null;
      echo "Unsetting PRODUCTS" >> ${PWD}/script_log/install_ots_repo.sh.script

      unset "PRODUCTS"

      qdbus $progress Set "" value 3 > /dev/null;
      qdbus $progress setLabelText "Re-Running OTS Setup script" > /dev/null;
      echo "Re-Running OTS Setup script" >> ${PWD}/script_log/install_ots_repo.sh.script

      source setup_ots.sh  

      qdbus $progress Set "" value 4 > /dev/null;
      qdbus $progress setLabelText "Building Prepmodernization and OTS (May Take some time!)" > /dev/null;  
      echo "Building Prepmodernization and OTS (May Take some time!)" >> ${PWD}/script_log/install_ots_repo.sh.script


      MRB_OUTPUT=$(mrb b | tee -a ${PWD}/script_log/install_ots_repo.sh.script | tail -n 3)
      if [[ $MRB_OUTPUT == *"Stage build successful."* ]]; then
	  echo "Successful build detected, continuing install" >> ${PWD}/script_log/install_ots_repo.sh.script
	  qdbus $progress Set "" value 5 > /dev/null;
	  qdbus $progress setLabelText "Build Successful! Creating Symlink for webapp" > /dev/null;  
	  echo "Build Successful! Creating Symlink for webapp" >> ${PWD}/script_log/install_ots_repo.sh.script
	    
	    #create a symlink for our webapp
	    ln -sfn /home/otsdaq/Desktop/otsdaq-v1_01_01/srcs/otsdaq_prepmodernization/UserWebGUI /home/otsdaq/Desktop/otsdaq-v1_01_01/srcs/otsdaq_utilities/WebGUI/UserWebPath
	    touch ${MRB_SOURCE}/otsdaq_prepmodernization/prepmodenization_installed
	    INSTALL_DATE=$(date '+%Y-%m-%d %H:%M:%S')
	    echo "prepmodenization repo installed on: " >> ${MRB_SOURCE}/otsdaq_prepmodernization/prepmodenization_installed
	    echo ${INSTALL_DATE} >> ${MRB_SOURCE}/otsdaq_prepmodernization/prepmodenization_installed
	    
	    echo "otsdaq_prepmodernization" >> ${USER_DATA}/ServiceData/InstalledRepoNames.dat
	    
	    #to add FENIMPlusInterface as an entry to FEInterfaceConfiguration
	    source ${MRB_SOURCE}/otsdaq_prepmodernization/tools/update_ots_repo.sh
	  
	  qdbus $progress Set "" value 6 > /dev/null;
	  qdbus $progress setLabelText "Install Complete!" > /dev/null;  
	  echo "Install Complete!" >> ${PWD}/script_log/install_ots_repo.sh.script
	    sleep 5
	  qdbus $progress close > /dev/null;
	  
	else
	  echo "Failed build detected, aborting install" >> ${PWD}/script_log/install_ots_repo.sh.script
	  qdbus $progress close > /dev/null;
	  kdialog --error "Error encountered while building!\nAborting setup.\nIf the problem persists, contact the OTSDAQ/PREPModernization developers."
	    #Clean up work already done
	    rm $USER_DATA/ConfigurationInfo/FENIMPlusInterfaceConfigurationInfo.xml
	    rm $USER_DATA/ConfigurationInfo/FENIMPlusInterfaceOptionalConfigurationInfo.xml
	    if grep -Fq "FENIMPlusInterface" $USER_DATA/ConfigurationInfo/FEInterfaceConfigurationInfo.xml
	    then
		#remove entry in FEINTERfaceConfigurationInfo
		sed -i -e 's/Interface,FENIMPlusInterface"\/>/Interface"\/>/' $USER_DATA/ConfigurationInfo/FEInterfaceConfigurationInfo.xml
	    else
		echo "Entry for 'FENIMPlusInterface' does NOT exist in FEInterfaceConfigurationInfo when trying to remove it (due to failed build)??? Something's weird..." | tee $OTSDAQ_DIR/../../script_log/install_ots_repo.sh.script;  
	    fi
	    rm ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
	    mrb z
	fi
  fi
else

   echo "Nothing to do, prepmodenization already installed! Running Update script instead..." >> ${PWD}/script_log/install_ots_repo.sh.script
   source ${MRB_SOURCE}/otsdaq_prepmodernization/tools/update_ots_repo.sh
  
fi 




