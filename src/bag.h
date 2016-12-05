/**
 * @file bag.h
 * */
#pragma once

#include "tile.h"
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

class Bag {
private:
    vector<Tile> bagTiles;
    auto engine = std::default_random_engine{}; // randomizer engine

public:
    Bag();
    void return_tiles(vector<Tile> tiles);
    bool is_empty();
};


