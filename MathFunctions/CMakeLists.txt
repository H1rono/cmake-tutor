option(USE_MYMATH "whether to use custom sqrt, or standard one" ON)

# TODO 14: Remove mysqrt.cxx from the list of sources

add_library(
    MathFunctions STATIC
    MathFunctions.cxx mysqrt.cxx
)

if (USE_MYMATH)
    target_compile_definitions(MathFunctions PUBLIC "USE_MYMATH")
endif()

# TODO 12: When USE_MYMATH is ON, add a library for SqrtLibrary with
# source mysqrt.cxx

# TODO 13: When USE_MYMATH is ON, link SqrtLibrary to the MathFunctions Library
