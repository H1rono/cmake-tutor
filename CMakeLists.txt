cmake_minimum_required(VERSION 3.10)

project(cmake-tutor VERSION 0.1.0)

set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(config.h.in config.h @ONLY)

add_subdirectory(MathFunctions)

add_executable(tutorial tutorial.cxx)

target_link_libraries(
    tutorial
    PUBLIC MathFunctions
)

# TODO 4: Add MathFunctions to Tutorial's target_include_directories()
# Hint: ${PROJECT_SOURCE_DIR} is a path to the project source. AKA This folder!

target_include_directories(
    tutorial
    PUBLIC ${PROJECT_BINARY_DIR}
    PRIVATE ${PROJECT_SOURCE_DIR}/MathFunctions
)
