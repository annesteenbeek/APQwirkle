/**
 * @file bag.cpp
 * @brief this class contains all the tiles produced in game
 * */


#include "bag.h"


Bag::Bag(){
    // add tile of every shape/color combo available
    for (const char &color : Tile::Colors){
        for (const char &shape : Tile::Shapes) {
            Tile tile = Tile(shape, color);
            bagTiles.push_back(tile);
        }
    }
    shuffle(bagTiles.begin(), bagTiles.end(), engine);
}

void Bag::return_tiles(vector<Tile> tiles){
    bagTiles.insert(bagTiles.end(), tiles.begin(), tiles.end());
    shuffle(bagTiles.begin(), bagTiles.end(), engine); // reshuffle
}

bool Bag::is_empty(){
    return bagTiles.empty();
}


