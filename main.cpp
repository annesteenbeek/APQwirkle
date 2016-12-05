#include <iostream>
#include "src/board.h"

int main() {
    Board myBoard = Board();
    string printBoard = myBoard.print_board();
    std::cout << printBoard << std::endl;
    return 0;
}