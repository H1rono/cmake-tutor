option(USE_MYMATH "whether to use custom sqrt, or standard one" ON)

add_library(
    MathFunctions STATIC
    MathFunctions.cxx
)

target_include_directories(
    MathFunctions
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
)

if (USE_MYMATH)
    target_compile_definitions(MathFunctions PUBLIC "USE_MYMATH")

    add_library(
        SqrtLibrary STATIC
        mysqrt.cxx
    )

    # TODO 6: Link SqrtLibrary to tutorial_compiler_flags

    target_link_libraries(MathFunctions PRIVATE SqrtLibrary)
endif()

# TODO 7: Link MathFunctions to tutorial_compiler_flags
