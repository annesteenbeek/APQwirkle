cmake_minimum_required(VERSION 3.6)
project(APQwirkle)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp src/player.cpp src/player.h src/board.cpp src/board.h src/game.cpp src/game.h src/bag.cpp src/bag.h src/hand.h src/tile.h src/tile.cpp src/boardTiles.cpp src/boardTiles.h src/move.h)
add_executable(APQwirkle ${SOURCE_FILES})