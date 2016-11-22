cmake_minimum_required(VERSION 2.8)
project(arithmetical_dragons)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_executable(main src/arithmetical_dragons.cpp src/enemy.h src/unit.h src/hero.h)
