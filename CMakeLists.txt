cmake_minimum_required(VERSION 3.2)
project(APQwirkle)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp
        src/board.cpp src/board.h
        src/tile.cpp src/tile.h
        src/boardTiles.cpp src/boardTiles.h)
add_executable(APQwirkle ${SOURCE_FILES})