cmake_minimum_required(VERSION 3.10)

project(cmake-tutor VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(config.h.in config.h @ONLY)

add_executable(tutorial tutorial.cxx)

# TODO 9: Use target_include_directories to include ${PROJECT_BINARY_DIR}
