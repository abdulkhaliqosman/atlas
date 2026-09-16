cmake_minimum_required(VERSION 3.24)
project(atlas LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "" FORCE)
endif()

option(ATLAS_SANITIZE "Build with AddressSanitizer and UndefinedBehaviorSanitizer" ON)

add_library(atlas_warnings INTERFACE)
target_compile_options(atlas_warnings INTERFACE -Wall -Wextra -Wpedantic -Wconversion -Wshadow)
if(ATLAS_SANITIZE)
  target_compile_options(atlas_warnings INTERFACE -fsanitize=address,undefined -fno-omit-frame-pointer)
  target_link_options(atlas_warnings INTERFACE -fsanitize=address,undefined)
endif()

find_package(Eigen3 REQUIRED NO_MODULE)
find_package(OpenCV REQUIRED COMPONENTS core imgcodecs)

include(FetchContent)
FetchContent_Declare(doctest
  URL https://github.com/doctest/doctest/archive/refs/tags/v2.4.12.tar.gz
  URL_HASH SHA256=73381c7aa4dee704bd935609668cf41880ea7f19fa0504a200e13b74999c2d70
  DOWNLOAD_EXTRACT_TIMESTAMP ON)
FetchContent_MakeAvailable(doctest)

enable_testing()

function(atlas_add_test name)
  add_executable(${name} ${ARGN})
  target_link_libraries(${name} PRIVATE doctest::doctest_with_main atlas_warnings)
  add_test(NAME ${name} COMMAND ${name})
endfunction()

# Shared engine code, reused across weeks.
add_subdirectory(core)
add_subdirectory(imaging)
add_subdirectory(tests)

# Week-specific experiments and their tests.
add_subdirectory(Semester_01/Week_01)
