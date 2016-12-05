/**
 * @file move.h
 * @brief moves are passed to organize placing of moves and pass them around
 * */

#pragma once
#include "tile.h"

struct Move {
    int row;
    int col;
    Tile tile;
};

