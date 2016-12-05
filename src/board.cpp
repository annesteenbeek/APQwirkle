/**
 * @file board.cpp
 * @brief class that manages the moves placed on the board.
 * */


#include "board.h"
#include "sstream"

using namespace std;


Board::Board(){
       boardTiles = BoardTiles();
}

bool Board::is_valid_move(vector<Move>& moves){

}

/**
* @brief This function places the tiles on the board and returns the scored points
* @param A vector of moves
* @return returns the points made by the move
* */
int Board::place_move(vector<Move>& moves){

}

/**
 * @brief function to calculate the points that would be made playing this move
 * @param the moves to be checked
 * @return points scored
 * */

int Board::get_points_for_move(vector<Move>& moves){

}

/**
 * @brief function to print the current board layout as a string
 * */
string Board::print_board(){
    stringstream ss;
    map<pair<int, int>, Tile> tileMap = boardTiles.getMap();
    map<pair<int, int>, Tile>::iterator it;
    int minBoardSize = 10; // min board print size in blocks
    int minRow = boardTiles.minRow;
    int maxRow = boardTiles.maxRow;
    int minCol = boardTiles.minCol;
    int maxCol = boardTiles.maxCol;

    int rows = max(minBoardSize, maxRow - minRow);
    int cols = max(minBoardSize, maxCol - minCol);

    for (int col = minCol; col < minCol + cols; col++) {
       ss << "|" << to_string(col);
    }
    for (int row = minRow; row < minRow + rows; row++) {
        ss << to_string(row);
        for (int col = minCol; col < minCol + cols; col++) {
            it = tileMap.find(make_pair(row, col));
            Tile &tile = it -> second;
            if (it != tileMap.end()){
                ss << it -> second.to_string();
            } else {
                ss << "|  ";
            }
        }
        ss << "|\n";
    }
}
