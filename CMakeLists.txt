cmake_minimum_required(VERSION 3.0)
project(Bruchzahl)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

add_executable(Bruchzahl main.cpp Bruchzahl.cpp)
