//
// Created by Sam on 6/2/2021.
//

#include <iostream>
#include <string>
#include <ctime>
#include "player.h"

player::player() {}

int player::GetHealth() {return playerHealth;}

void player::playerIntro(string playerName) {
    cout << playerName << ", you are a well-traveled wanderer "
         "with only your name, provisions, and trusty weapon." << endl;
    cout << "You have " << GetHealth() << " HP and a sword." << endl;
}

int player::rollPlayerDmg() {
    srand(time(0));

    int playerDmgRoll = rand() % (playerDamage + 1);

    return playerDmgRoll;
}
