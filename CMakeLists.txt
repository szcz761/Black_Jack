cmake_minimum_required(VERSION 2.8.12.2)
project(Black-Jack)

set (CMAKE_CXX_FLAGS "-std=gnu++11 ${CMAKE_CXX_FLAGS}")
 
include_directories(inc)

file(GLOB SOURCES "src/*.cpp")

add_executable(BlackJack ${SOURCES})


