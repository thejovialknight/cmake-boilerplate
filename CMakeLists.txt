# Minimum version of CMake that can run this script
cmake_minimum_required(VERSION 3.12)

# Project name and version
project(Boilerplate VERSION 1.0)

# Request c++11 standard features
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Compile the passed source files into an executable
add_executable(Boilerplate
	"${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp")

# Set the output directory for executables
set_target_properties(Boilerplate
	PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")
