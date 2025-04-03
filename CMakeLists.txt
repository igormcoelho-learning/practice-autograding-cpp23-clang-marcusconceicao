cmake_minimum_required(VERSION 4.0.0)
# set(CMAKE_CXX_COMPILER /usr/bin/g++-15)
set(CMAKE_CXX_COMPILER /usr/bin/clang++-19)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "a9e1cf81-9932-4810-974b-6eccaf14e457")
set(CMAKE_CXX_MODULE_STD 1)

project(autograding_project VERSION 0.1.0 LANGUAGES CXX)

add_library(student)
target_sources(student  PUBLIC  FILE_SET CXX_MODULES FILES   src/student.cppm)

#add_library(ut_module)
#target_sources(ut_module  PUBLIC  FILE_SET CXX_MODULES FILES   thirdparty/boost/include/ut.cppm)

#==========
#  TESTS
#----------
Include(FetchContent)
set(BOOST_UT_DISABLE_MODULE 0)
FetchContent_Declare(ut GIT_REPOSITORY https://github.com/boost-ext/ut.git GIT_COMMIT 3390db68577ffa970f1f28af7146976ad9280feb)
FetchContent_MakeAvailable(ut)
#
add_executable(app_tests tests/tests.cpp)
target_link_libraries(app_tests PRIVATE student ut_module)
