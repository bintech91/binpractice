cmake_minimum_required (VERSION 2.6)
project (binpractice_cpp)
# The version number.
set (binpractice_cpp_VERSION_MAJOR 1)
set (binpractice_cpp_VERSION_MINOR 0)
 
# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")
 
# add the executable
add_executable(binpractice_cpp_template practice_template.cpp)