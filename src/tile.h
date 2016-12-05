
#pragma once
#include "map"
using namespace std;

// FIXME shapes and colors could probably be managed more efficiently

enum Color{Red, Green, Blue, Yellow, Orange, Purple,
            ColorFirst=Red, ColorLast=Purple}; // added for iteration
map<Color, char> colorString = {{Red, 'R'},{Green,'G'}, {Blue, 'B'}, {Yellow,'Y'}, {Orange,'O'}, {Purple, 'P'}};

enum Shape{$, O, X, R, V, W,
            ShapeFirst=$, ShapeLast=W}; // added for iteration
map<Shape, char> shapeString = {{$, '$'}, {O, 'O'}, {X, 'X'}, {R, 'R'}, {V, 'V'}, {W, 'W'}};


class Tile {

public:
    Color color;
    Shape shape;

    Tile(Shape _shape, Color _color);
    string to_string();

private:
    string print;
};
