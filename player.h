//
// Created by Sam on 6/2/2021.
//

#ifndef GOBOGAME_PLAYER_H
#define GOBOGAME_PLAYER_H

using namespace std;

class player {
protected:
    int playerHealth = 20;
    int playerDamage = 8;

public:
    player();

    int GetHealth();

    void playerIntro(string playerName);

    int rollPlayerDmg();
};

#endif //GOBOGAME_PLAYER_H
