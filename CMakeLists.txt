cmake_minimum_required(VERSION 2.8)
project(arithmetical_dragons)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_executable(main src/arithmetical_dragons.cpp src/Enemy.h src/Unit.h src/Hero.h src/Unit.cpp src/Hero.cpp src/Enemy.cpp src/Dragons.cpp src/Dragons.h src/Game.cpp src/Game.h src/Quests.cpp src/Quests.h)


add_executable(draft draft.cpp)