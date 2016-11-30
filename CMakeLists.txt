cmake_minimum_required(VERSION 2.8)
project(arithmetical_dragons)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_executable(main src/arithmetical_dragons.cpp src/units/Enemy.h src/Unit.h src/units/Hero.h src/Unit.cpp src/units/Hero.cpp src/units/Enemy.cpp src/Game.cpp src/Game.h src/modifiers/Quests.cpp src/modifiers/Quests.h src/units/enemies/AdditionDragon.cpp src/units/enemies/AdditionDragon.h src/units/enemies/SubtractionDragon.cpp src/units/enemies/SubtractionDragon.h src/units/enemies/MultiplicationDragon.cpp src/units/enemies/MultiplicationDragon.h src/ShowState.cpp src/ShowState.h)


add_executable(draft draft.cpp)