//
// Created by Sam on 4/17/2021.
//

#include <iostream>
#include <string>
#include <ctime>
#include "baseMonster.h"
#include "goblin.h"
using namespace std;

goblin::goblin() {
    health = 20;
    damage = 4;
    desc = "A ragged, scar-faced goblin stands in your way, "
           "its dagger flashing hungrily in your coin purse's direction. "
           "Without warning, the goblin slashes!";
    weaponText = "keen blade slices";
    name = "goblin";
}

goblin::goblin(int goboHlth, int goboDmg, string goboDesc, string goboWeap, string goboNme)
        : monster(goboHlth, goboDmg, goboDesc, goboWeap, goboNme) {
    health = goboHlth;
    damage = goboDmg;
    desc = goboDesc;
    name = goboNme;
    weaponText = goboWeap;
}

void goblin::printMonsterData() {
    cout << "- MONSTER DATA -" << endl
         << "Monster Type: " << GetName() << endl
         << "Damage Max: " << GetDamage() << endl
         << "Health Max: " << GetHealth() << endl
         << "Desc: " << GetDesc() << endl
         << "Weapon Text: " << GetWeapon() << endl;

}

