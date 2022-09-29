//
// Created by Sam on 4/17/2021.
//

#ifndef GOBOGAME_GOBLIN_H
#define GOBOGAME_GOBLIN_H

using namespace std;

class goblin: public monster {

public:
    goblin();

    goblin(int, int, string, string, string);


    void printMonsterData();


};

#endif //GOBOGAME_GOBLIN_H
