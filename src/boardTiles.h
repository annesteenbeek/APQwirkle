/**
 * @file boardTiles.h
 * */


#pragma once
#include "map"
#include "tile.h"

using namespace std;


class BoardTiles {
    map<pair<int, int>, Tile> tilemap;

public:
    int minRow = 0;
    int maxRow = 0;
    int minCol = 0;
    int maxCol = 0;

    Tile get_tile(int row, int col);
    void place_tile(int row, int col, Tile tile);
    map<pair<int,int>, Tile> getMap();
};



