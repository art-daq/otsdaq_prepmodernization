  
  #code to update existing installs will be here
  if [[ $(diff -rq ${MRB_SOURCE}/otsdaq_prepmodernization/Data/ConfigurationInfo ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitData/ConfigurationInfo | grep otsdaq_prepmodernization/Data/ConfigurationInfo) ]]; then
  #copy database data for *only* new databases (doesn't copy/modify existing data)
  diff -rq ${MRB_SOURCE}/otsdaq_prepmodernization/Data/ConfigurationInfo ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitData/ConfigurationInfo | grep "Only in ${MRB_SOURCE}/otsdaq_prepmodernization/Data/ConfigurationInfo" | awk '{print $4}' | xargs -L1 -I {} basename {} .xml | xargs -L1 -I {} cp -r ${MRB_SOURCE}/otsdaq_prepmodernization/Databases/{} ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitDatabases/
  #make backup of previous database definition of any that are different between Data and NoGitData
  diff -rq ${MRB_SOURCE}/otsdaq_prepmodernization/Data/ConfigurationInfo ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitData/ConfigurationInfo | grep otsdaq_prepmodernization/Data/ConfigurationInfo | awk '{print $4}' | awk '{print $NF}' FS=/ | xargs -L1 -I {} cp ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitData/ConfigurationInfo/{} ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitData/ConfigurationInfo/{}.bk
  #copy database definitions for new and changes databases, overwrites previous database definitions
  diff -rq ${MRB_SOURCE}/otsdaq_prepmodernization/Data/ConfigurationInfo ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitData/ConfigurationInfo | grep otsdaq_prepmodernization/Data/ConfigurationInfo | awk '{print $4}' | awk '{print $NF}' FS=/ | xargs -L1 -I {} \cp -f ${MRB_SOURCE}/otsdaq_prepmodernization/Data/ConfigurationInfo/{} ${MRB_SOURCE}/otsdaq_prepmodernization/NoGitData/ConfigurationInfo/{}
  UPDATE_DATE=$(date '+%Y-%m-%d %H:%M:%S')
  echo >> ${MRB_SOURCE}/otsdaq_prepmodernization/prepmodenization_installed
  echo "prepmodenization repo updated w/ database file changes on: " >> ${MRB_SOURCE}/otsdaq_prepmodernization/prepmodenization_installed
  echo ${UPDATE_DATE} >> ${MRB_SOURCE}/otsdaq_prepmodernization/prepmodenization_installed