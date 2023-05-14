cmake_minimum_required(VERSION 3.23)
project(untitled1)

set(CMAKE_CXX_STANDARD 14)

add_executable(D&D DungeonMaster.cpp DungeonMaster.h main.cpp Room.h TrapRoom.h TrapRoom.cpp TreasureRoom.h TreasureRoom.cpp EnemyRoom.h EnemyRoom.cpp)
