cmake_minimum_required(VERSION 2.8)
project(arithmetical_dragons)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_executable(main src/arithmetical_dragons.cpp src/Dragon.h src/Hero.h src/Unit.h)


add_executable(draft draft.cpp)