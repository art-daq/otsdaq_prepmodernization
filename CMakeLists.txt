# ======================================================================
#  otsdaq-prepmodernization main build file
#
#  cd .../path/to/build/directory
#  source .../path/to/otsdaq-prepmodernization/ups/setup_for_development
#  buildtool
# ======================================================================


# use cmake 3.17 or later
cmake_minimum_required (VERSION 3.19 FATAL_ERROR)

find_package(cetmodules 3.16.00 REQUIRED)

project(otsdaq_prepmodernization VERSION 2.06.06)

include(CetCMakeEnv)
cet_cmake_env()

cet_set_compiler_flags(DIAGS VIGILANT
 WERROR
 NO_UNDEFINED
 EXTRA_FLAGS -pedantic -D_LIBCPP_ENABLE_CXX17_REMOVED_FEATURES=1
 )

cet_report_compiler_flags()

find_package(otsdaq 2.06.06 REQUIRED)
find_package(otsdaq_components 2.06.06 REQUIRED)

 # XDAQ Extra setup
 include_directories($ENV{XDAQ_INC}/linux $ENV{XDAQ_INC})
link_directories($ENV{XDAQ_LIB})
link_directories($ENV{ARTDAQ_DATABASE_LIB})
 set(XDAQ_BASIC_LIB_LIST 
   xcept
   xoap
   xdaq
   toolbox
   xerces-c
   cgicc
 )
 set(XDAQ_XERCES-C xerces-c)

# Code
add_subdirectory(otsdaq-prepmodernization)

# Useful scripts
#add_subdirectory(tools)

# Test Programs
#add_subdirectory(test)

# Documentation directory
if( $ENV{OTS_DOXY} MATCHES "DOIT" )
	add_subdirectory(doc)
endif()

cet_cmake_config()
