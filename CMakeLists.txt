# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)


set(CMAKE_COMPILE_WARNING_AS_ERROR ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(DSP-Cpp-filters VERSION 1.0.0 DESCRIPTION "DSP C++ audio filters")

option(BUILD_UNIT_TESTS "Build the tests" OFF)
option(DSP_FILTERS_DOUBLE_PRECISION "use double for coefficients" OFF)

add_library(dsp-filters INTERFACE)
target_include_directories(dsp-filters INTERFACE lib)
if(${DSP_FILTERS_DOUBLE_PRECISION})
    target_compile_definitions(dsp-filters INTERFACE COEFF_SIZE_DOUBLE=1)
endif()


if (BUILD_UNIT_TESTS)
    enable_testing()

    include(FetchContent)
    FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
    )
    # For Windows: Prevent overriding the parent project's compiler/linker settings
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    FetchContent_MakeAvailable(googletest)
   
    # Add tests sub-dir
    add_subdirectory(tests)
endif()
