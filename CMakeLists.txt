cmake_minimum_required(VERSION 2.8.12.2)
project(Black-Jack)

# lepiej to:
# set(CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_FLAGS "-std=gnu++11 ${CMAKE_CXX_FLAGS}")
 
include_directories(inc)

file(GLOB SOURCES "src/*.cpp")

add_executable(BlackJack ${SOURCES})


