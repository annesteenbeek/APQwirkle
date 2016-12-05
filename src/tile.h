
#pragma once
#include <string>

using namespace std;

class Tile {

public:
    Tile(char shape, char color);
    string to_string();
    static constexpr char Colors[6] = {'R', 'G', 'B', 'Y', 'O', 'P'};
    static constexpr char Shapes[6] = {'$', 'O', 'X', 'R', 'V', 'W'};


private:

    char _color;
    char _shape;
    string print = "";
};
