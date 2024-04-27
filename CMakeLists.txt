cmake_minimum_required(VERSION 3.27)
project(leetcode)
set(CMAKE_CXX_STANDARD 17)
set(Boost_INCLUDE_DIR /opt/boost_1_84_0)
find_package(Boost 1.84.0)
include_directories(${Boost_INCLUDE_DIR})

add_executable(leetcode
    739/739_tests.cpp
)
#set_target_properties(leetcode PROPERTIES LINKER_LANGUAGE CXX)

