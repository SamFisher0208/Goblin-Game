//
// Created by Sam on 4/12/2021.
// Monster base
//

#ifndef GOBOGAME_BASEMONSTER_H
#define GOBOGAME_BASEMONSTER_H

using namespace std;

class monster {
protected:
    int health;
    int damage;
    string desc;
    string weaponText;
    string name;

public:
    monster();

    monster(int, int, string, string, string);

    void SetHealth(int);
    void SetDamage(int);
    void SetDesc(string);
    void SetName(string);
    void SetWeapon(string);

    virtual int GetHealth();
    virtual int GetDamage();
    virtual string GetDesc();
    virtual string GetName();
    virtual string GetWeapon();


    int rollDamage();

    virtual void printMonsterData() = 0;

};

#endif //GOBOGAME_BASEMONSTER_H
