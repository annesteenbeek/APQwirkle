/**
 * @file boardTiles.cpp
 * @brief used for managing and storing the tiles allready placed on the board with additional helper functions
 * */


#include "boardTiles.h"

Tile BoardTiles::get_tile(int row, int col) {
    return tilemap[make_pair(row, col)];
}

void BoardTiles::place_tile(int row, int col, Tile tile) {
    tilemap[make_pair(row, col)] = tile;

    // Store board bounds for easy retrieval
    minRow = min(row, minRow);
    maxRow = max(row, maxRow);
    minCol = min(col, minCol);
    maxCol = max(col, maxCol);
}

map<pair<int, int>, Tile> BoardTiles::getMap(){
    return tilemap;
};


