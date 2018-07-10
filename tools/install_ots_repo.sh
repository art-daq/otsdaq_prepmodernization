#!/bin/bash
#Install Prepmodernization into otsdaq


PWD=$(pwd)
if [ ! -e ${MRB_SOURCE}/otsdaq_prepmodernization/prepmodenization_installed ]; then #if it's installing for the first time
    if kdialog --title "WARNING - DATA DIRECTORY MUST EXIST" \
      --warningcontinuecancel "Note that since you are NOT installing within a VM,\na user data directroy MUST exist and be set as such in your setup_ots.sh file.\nOnly continue if this is the case. Otherwise, installation will fail.\n"
    then
      progress=$(kdialog --title "Installing PREPModernization Repo" --progressbar "Creating prepmodenization .gitignore file");
      qdbus $progress Set "" maximum 6 > /dev/null;
    
      echo "Creating prepmodenization .gitignore file" >> ${PWD}/script_log/install_ots_repo.sh.script

      #create .gitignore to ignore user data
      if [ ! -f ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore ]; then
	  touch ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
      else
	  cp ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore.bk
      fi
      echo ".gitignore" >> ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
      echo "NoGitData/" >> ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
      echo "NoGitDatabases/" >> ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
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
	ln -sfn ${MRB_SOURCE}/otsdaq_prepmodernization/UserWebGUI ${MRB_SOURCE}/otsdaq_utilities/WebGUI/NimPlusWebPath
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
	if [ ! -f ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore.bk ]; then
	  rm ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
	else
	  rm ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
	  mv ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore.bk ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
	fi
	mrb z
      fi
    else
     kdialog --error "User aborted install. Exiting..."
     echo "User aborted install during confirmation that User Data Folder exists, exiting..." >> ${PWD}/script_log/install_ots_repo.sh.script  
  fi
 fi 
else

   echo "Nothing to do, prepmodenization already installed! Running Update script instead..." >> ${PWD}/script_log/install_ots_repo.sh.script
   source ${MRB_SOURCE}/otsdaq_prepmodernization/tools/update_ots_repo.sh
  
fi 




