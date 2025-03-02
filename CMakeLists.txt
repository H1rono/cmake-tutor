cmake_minimum_required(VERSION 3.10)

project(cmake-tutor VERSION 0.1.0)

# TODO 4: Replace the following code by:
# * Creating an interface library called tutorial_compiler_flags
#   Hint: use add_library() with the INTERFACE signature
# * Add compiler feature cxx_std_11 to tutorial_compiler_flags
#   Hint: Use target_compile_features()

set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(config.h.in config.h @ONLY)

add_subdirectory(MathFunctions)

add_executable(tutorial tutorial.cxx)

# TODO 5: Link Tutorial to tutorial_compiler_flags

target_link_libraries(
    tutorial
    PUBLIC MathFunctions
)

target_include_directories(
    tutorial
    PUBLIC ${PROJECT_BINARY_DIR}
)
