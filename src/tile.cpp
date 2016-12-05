
#include "tile.h"

using namespace std;


Tile::Tile(char shape, char color){
    _shape = shape;
    _color = color;
    print.push_back(_color);
    print.push_back(_shape);
}


string Tile::to_string(){return print;}

