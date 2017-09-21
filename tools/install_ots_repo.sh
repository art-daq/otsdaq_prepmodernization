#!/bin/bash
#Install Prepmodernization into otsdaq
ln -sfn /home/otsdaq/Desktop/otsdaq-v1_01_01/srcs/otsdaq_prepmodernization/UserWebGUI /home/otsdaq/Desktop/otsdaq-v1_01_01/srcs/otsdaq_utilities/WebGUI/UserWebPath

cat setup_ots.sh > setup_ots_repo_temp.sh 
echo >> setup_ots_repo_temp.sh 
echo "./${MRB_SOURCE}/otsdaq_prepmodernization/tools/extra_setup_ots_repo.sh" >> setup_ots_repo_temp.sh
cp setup_ots.sh setup_ots.sh.bk
mv setup_ots_repo_temp.sh setup_ots.sh

