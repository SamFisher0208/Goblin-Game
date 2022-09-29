//
// Created by Sam on 5/5/2021.
//

#ifndef GOBOGAME_GORGON_H
#define GOBOGAME_GORGON_H
using namespace std;

class gorgon: public monster {

public:
    gorgon();

    gorgon(int, int, string, string, string);

    void printMonsterData();


};
#endif //GOBOGAME_GORGON_H
