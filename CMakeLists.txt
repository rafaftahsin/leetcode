cmake_minimum_required(VERSION 3.27)
project(leetcode)

set(CMAKE_CXX_STANDARD 17)
set(Boost_INCLUDE_DIR /opt/boost_1_84_0)
find_package(Boost 1.84.0)
include_directories(${Boost_INCLUDE_DIR})

add_executable(leetcode main.cpp
        217/217.cpp
        217/217_Test.cpp
        217/217.h)
