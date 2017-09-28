#!/bin/bash
#Install Prepmodernization into otsdaq


if [ ! -e /home/otsdaq/Desktop/otsdaq-v1_01_01/srcs/otsdaq_prepmodernization/UserWebGUI/UserWebGUI ]; then #if it's installing for the first time


  dbusRef=`kdialog --progressbar "Launching OTS (in Normal Mode)" 7`

  qdbus $dbusRef Set "." value 1


  #create a symlink for our webapp
  ln -sfn /home/otsdaq/Desktop/otsdaq-v1_01_01/srcs/otsdaq_prepmodernization/UserWebGUI /home/otsdaq/Desktop/otsdaq-v1_01_01/srcs/otsdaq_utilities/WebGUI/UserWebPath

  qdbus $dbusRef Set ".." value 2
  
  #setup data folders for user data and copy example data into them
  mkdir ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitData
  mkdir ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitDatabases
  cp -r ${MRB_SOURCE}/otsdaq_prepmodernization/Data/* ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitData/
  cp -r ${MRB_SOURCE}/otsdaq_prepmodernization/Databases/* ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitDatabases/

  
  qdbus $dbusRef Set "..." value 3
  
  #modify setup_ots.sh
  cat setup_ots.sh > setup_ots_repo_temp.sh 
  echo >> setup_ots_repo_temp.sh 
  echo "source ${MRB_SOURCE}/otsdaq_prepmodernization/tools/extra_setup_ots_repo.sh" >> setup_ots_repo_temp.sh
  cp setup_ots.sh setup_ots.sh.bk
  mv setup_ots_repo_temp.sh setup_ots.sh
  
  qdbus $dbusRef Set "..." value 4

  #create .gitignore to ignore user data
  touch ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
  echo ".gitignore" >> ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
  echo "NoGitData/" >> ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
  echo "NoGitDatabases/" >> ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore
  echo "UserWebGUI/UserWebGUI" >> ${MRB_SOURCE}/otsdaq_prepmodernization/.gitignore

  qdbus $dbusRef Set "..." value 5
  unsetup_all  
  qdbus $dbusRef Set "..." value 6
  souce setup_ots.sh  
  qdbus $dbusRef Set "..." value 7
  mrb b
  
  qdbus $dbusRef close	

else
  #code to update existing installs will be here
  echo "Nothing to do, prepmodenization already installed!"
fi 




