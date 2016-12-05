//
// Created by anne on 4-12-16.
//

#include "player.h"
#include <string>

using namespace std;

class Player{

    string name;
    uint score = 0;

    public:
        Player(string player_name);
};

Player::Player(string player_name){
   name = player_name;
};