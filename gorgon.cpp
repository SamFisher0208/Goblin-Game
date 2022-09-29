//
// Created by Sam on 5/5/2021.
//

#include <iostream>
#include <string>
#include <ctime>
#include "baseMonster.h"
#include "gorgon.h"
using namespace std;

gorgon::gorgon() {
    health = 30;
    damage = 6;
    desc = "Gorgon Script";
    weaponText = "vicious whip cracks";
    name = "gorgon";
}

gorgon::gorgon(int gorgoHlth, int gorgoDmg, string gorgoDesc, string gorgoWeap, string gorgoNme)
        : monster(gorgoHlth, gorgoDmg, gorgoDesc, gorgoWeap, gorgoNme) {
    health = gorgoHlth;
    damage = gorgoDmg;
    desc = gorgoDesc;
    weaponText = gorgoNme;
    name = gorgoWeap;
}

void gorgon::printMonsterData() {
    cout << "- MONSTER DATA -" << endl
         << "Monster Type: " << GetName() << endl
         << "Damage Max: " << GetDamage() << endl
         << "Health Max: " << GetHealth() << endl
         << "Desc: " << GetDesc() << endl
         << "Weapon Text: " << GetWeapon() << endl;

}
