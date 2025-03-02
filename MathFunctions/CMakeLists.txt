option(USE_MYMATH "whether to use custom sqrt, or standard one" ON)

add_library(
    MathFunctions STATIC
    MathFunctions.cxx
)

# TODO 1: State that anybody linking to MathFunctions needs to include the
# current source directory, while MathFunctions itself doesn't.
# Hint: Use target_include_directories with the INTERFACE keyword

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
