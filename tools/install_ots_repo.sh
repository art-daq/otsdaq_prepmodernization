#!/bin/bash
#Install Prepmodernization into otsdaq


if [ ! -e /home/otsdaq/Desktop/otsdaq-v1_01_01/srcs/otsdaq_prepmodernization/UserWebGUI/UserWebGUI ]; then #if it's installing for the first time
progress=$(kdialog --title "Installing PREPModernization Repo" --progressbar "Creating and populating user data folders");
qdbus $progress Set "" maximum 7 > /dev/null;

  #setup data folders for user data and copy example data into them
  mkdir ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitData
  mkdir ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitDatabases
  cp -r ${MRB_SOURCE}/otsdaq_prepmodernization/Data/* ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitData/
  cp -r ${MRB_SOURCE}/otsdaq_prepmodernization/Databases/* ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitDatabases/

qdbus $progress Set "" value 1 > /dev/null;
qdbus $progress setLabelText "Modifying OTS Setup Script" > /dev/null;
  
  #modify setup_ots.sh
  cat setup_ots.sh > setup_ots_repo_temp.sh 
  echo >> setup_ots_repo_temp.sh 
  echo "source ${MRB_SOURCE}/otsdaq_prepmodernization/tools/extra_setup_ots_repo.sh" >> setup_ots_repo_temp.sh
  cp setup_ots.sh setup_ots.sh.bk
  mv setup_ots_repo_temp.sh setup_ots.sh
  
qdbus $progress Set "" value 2 > /dev/null;
qdbus $progress setLabelText "Creating prepmodenization .gitignore file" > /dev/null;

  #create .gitignore to ignore user data
  touch ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
  echo ".gitignore" >> ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
  echo "NoGitData/" >> ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
  echo "NoGitDatabases/" >> ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
  echo "UserWebGUI/UserWebGUI" >> ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore

qdbus $progress Set "" value 3 > /dev/null;
qdbus $progress setLabelText "Unsetting all variables" > /dev/null;

  unsetup_all
  unset "PRODUCTS"
  
qdbus $progress Set "" value 4 > /dev/null;
qdbus $progress setLabelText "Re-Running OTS Setup script" > /dev/null;

  source setup_ots.sh  
  
qdbus $progress Set "" value 5 > /dev/null;
qdbus $progress setLabelText "Building Prepmodernization and OTS (May Take some time!)" > /dev/null;  
  PWD=$(pwd)
  MRB_OUTPUT=$(mrb b | tee -a ${PWD}/script_log/install_ots_repo.sh.script | tail -n 3)
  if [[ $MRB_OUTPUT == *"Stage build successful."* ]]; then
      echo "Successful build detected, continuing install"
      qdbus $progress Set "" value 6 > /dev/null;
      qdbus $progress setLabelText "Build Successful! Creating Symlink for webapp" > /dev/null;  
      
      #create a symlink for our webapp
      ln -sfn /home/otsdaq/Desktop/otsdaq-v1_01_01/srcs/otsdaq_prepmodernization/UserWebGUI /home/otsdaq/Desktop/otsdaq-v1_01_01/srcs/otsdaq_utilities/WebGUI/UserWebPath
      
      qdbus $progress Set "" value 7 > /dev/null;
      qdbus $progress setLabelText "Install Complete!" > /dev/null;  

      sleep 5
      qdbus $progress close > /dev/null;
      
    else
      echo "Failed build detected, aborting install"
      qdbus $progress close > /dev/null;
      kdialog --error "Error encountered while building!\nAborting setup, make sure your VM is configured for your host machine correctly.\nIf the problem persists, contact the PREPModernization developers."
      #Clean up work already done
      mv setup_ots.sh.bk setup_ots.sh
      rm -rf ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitData/
      rm -rf ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitDatabases/
      rm ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
  fi
else
  #code to update existing installs will be here
  echo "Nothing to do, prepmodenization already installed!"
fi 




