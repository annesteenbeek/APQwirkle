//
// Created by anne on 4-12-16.
//

#pragma once

#include "boardTiles.h"
#include "move.h"
#include "vector"
#include "tile.h"

class Board{
private:

public:
    Board();

    BoardTiles boardTiles;
    bool is_valid_move(vector<Move>& moves);
    int place_move(vector<Move>& moves);

    string print_board();

    int get_points_for_move(vector<Move> &moves);
};


