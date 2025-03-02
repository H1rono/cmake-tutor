option(USE_MYMATH "whether to use custom sqrt, or standard one" ON)

# TODO 14: Remove mysqrt.cxx from the list of sources

add_library(
    MathFunctions STATIC
    MathFunctions.cxx mysqrt.cxx
)

if (USE_MYMATH)
    target_compile_definitions(MathFunctions PUBLIC "USE_MYMATH")

    add_library(
        SqrtLibrary STATIC
        mysqrt.cxx
    )

    target_link_libraries(MathFunctions PRIVATE SqrtLibrary)
endif()
