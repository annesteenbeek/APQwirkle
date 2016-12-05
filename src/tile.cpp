//
// Created by anne on 4-12-16.
//

#include "tile.h"
#include "string"

using namespace std;

Tile::Tile(Shape _shape, Color _color){
    shape = _shape;
    color = _color;
    print = colorString[color] + shapeString[shape] + string();
}


string Tile::to_string(){return print;}

