/**
 * @file boardTiles.cpp
 * @brief used for managing and storing the tiles allready placed on the board with additional helper functions
 * */


#include "boardTiles.h"

void BoardTiles::place_tile(int row, int col, Tile tile) {
    pair<int, int> index = make_pair(row, col);
    tilemap.insert(make_pair(index, tile));

    // Store board bounds for easy retrieval
    minRow = min(row, minRow);
    maxRow = max(row, maxRow);
    minCol = min(col, minCol);
    maxCol = max(col, maxCol);
}

map<pair<int, int>, Tile> BoardTiles::get_map(){
    return tilemap;
};

Tile * BoardTiles::get_tile(int row, int col) {
    map<pair<int, int>, Tile>::iterator it = tilemap.find(make_pair(row, col));
    if (it != tilemap.end())
        return &(it -> second); // return pointer to tile
    else return nullptr;
}

bool BoardTiles::has_tile(int row, int col) {
    Tile* result = get_tile(row, col);
    if(result)
        return true;
    else
        return false;
}
