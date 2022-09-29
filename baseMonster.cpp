//
// Created by Sam on 4/12/2021.
//

#include <iostream>
#include <string>
#include <ctime>
#include "baseMonster.h"
using namespace std;

monster::monster() {
    health = 0;
    damage = 0;
    desc = "None";
    weaponText = "No Weapon";
    name = "No Name";
}

monster::monster(int monstHlth, int monstDmg, string monstDesc, string monstWeap, string monstName) {
    health = monstHlth;
    damage = monstDmg;
    desc = monstDesc;
    weaponText = monstWeap;
    name = monstName;
}

void monster::SetDamage(int monstDmg) {damage = monstDmg;}
void monster::SetHealth(int monstHlth) {health = monstHlth;}
void monster::SetDesc(string monstDesc) {monstDesc = monstDesc;}
void monster::SetName(string monstName) {name = monstName;}
void monster::SetWeapon(string monstWeap) {weaponText = monstWeap;}

int monster::GetDamage() {return damage;}
int monster::GetHealth() {return health;}
string monster::GetDesc() {return desc;}
string monster::GetName() {return name;}
string monster::GetWeapon() {return weaponText;}

int monster::rollDamage() {
    srand(time(0));

    int monsterDmgRoll = rand() % (GetDamage() + 1);

    return monsterDmgRoll;

}

