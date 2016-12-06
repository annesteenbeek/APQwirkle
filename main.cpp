#include <iostream>
#include "src/board.h"

using namespace std;

int main() {
    Board myBoard = Board();
    string printBoard = myBoard.print_board();
    cout << printBoard <<endl;
    // make new tile
    Tile tile = Tile(Tile::Shapes[0], Tile::Colors[0]);
    myBoard.boardTiles.place_tile(5, 5, tile);
    cout << endl;
    printBoard = myBoard.print_board();
    cout << printBoard;

    return 0;
}