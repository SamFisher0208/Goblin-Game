#include <iostream>
#include <vector>
#include <ctime>
#include "baseMonster.h"
#include "goblin.h"
#include "gorgon.h"
#include "player.h"

//add buff or health pot

using namespace std;

vector<monster*> monsterList;

monster *rollMonster();

void gameIntro(monster *newMonst);

int main() {

    monster *newMonst = rollMonster();

    player player1;

    int playerChoice;

    gameIntro(newMonst);

    int currentMonsterHP = newMonst->GetHealth();
    int currentPlayerHP =  player1.GetHealth();


    do {
        int currentMonsterDamageRand = newMonst->rollDamage();

        cout << "The " << newMonst->GetName() << "'s " << newMonst->GetWeapon() << " you for ";
        cout << currentMonsterDamageRand << " damage!" << endl;
        cout << endl;

        currentPlayerHP = currentPlayerHP - currentMonsterDamageRand;

         if (currentPlayerHP > 0) {
             cout << "You have " << currentPlayerHP << " HP, what do you do?" << endl;
             cout << "1: Attack!\n2: Run Away!\nEnter choice: ";
             cin >> playerChoice;
             cout << endl;

             if (playerChoice == 1) {
                 int playerDamageRand = player1.rollPlayerDmg();
                 cout << "The gash stings and oozes black-red, but you're made of heartier stuff! "
                         "You bring your sword down for a mighty blow! The " << newMonst->GetName()
                         << " takes " << playerDamageRand << " damage!" << endl;

                 currentMonsterHP = currentMonsterHP - playerDamageRand;

                 cout << "The " << newMonst->GetName() << " has " << currentMonsterHP << " HP!\n" << endl;
             }
             if (playerChoice == 2) {
                 cout << "You realize, suddenly, that you've left the stove on and must return home - gotta go, scary "
                 << newMonst->GetName() << "!!" << endl;
             }
         }
     }while (currentMonsterHP > 0 && playerChoice != 2 && currentPlayerHP > 0);


     //Monster death

     if (currentMonsterHP <= 0) {
         cout << "The " << newMonst->GetName()
              << " wails and falls to the ground, slain, burbling its last breath "
                 "through dark green ichor.\nIt leaves you with all its splendor!\nYou recieve [one rock]." << endl;
     }

     //Player death

     if (currentPlayerHP <= 0) {
         cout << "With a final death blow, the " << newMonst->GetName() << "'s " << newMonst->GetWeapon()
              << " and finishes you off.";
         cout << " Your body slumps to the ground and the last thing you hear is the "
                 "faint jingling of coins and scratchy cackles. YOU DIED." << endl;
     }



    return 0;
}

monster *rollMonster() {
    srand(time(0));

    monster *tempMonst;
    tempMonst = new goblin();
    monsterList.push_back(tempMonst);
    tempMonst = new gorgon();
    monsterList.push_back(tempMonst);

    int randMonstIndex = rand() % 2;

    return monsterList[randMonstIndex];

}

void gameIntro(monster *newMonst) {
    player newPlayer;
    string playerName;

    cout << "\n"
            "▄████  █▄▄▄▄ ████▄    ▄▄▄▄▄      ▄▄▄▄▀       ▄▀  ██   █▀▄▀█ ▄███▄     ▄▄▄▄▄   \n"
            "█▀   ▀ █  ▄▀ █   █   █     ▀▄ ▀▀▀ █        ▄▀    █ █  █ █ █ █▀   ▀   █     ▀▄ \n"
            "█▀▀    █▀▀▌  █   █ ▄  ▀▀▀▀▄       █        █ ▀▄  █▄▄█ █ ▄ █ ██▄▄   ▄  ▀▀▀▀▄   \n"
            "█      █  █  ▀████  ▀▄▄▄▄▀       █         █   █ █  █ █   █ █▄   ▄▀ ▀▄▄▄▄▀    \n"
            " █       █                      ▀           ███     █    █  ▀███▀             \n"
            "  ▀     ▀                                          █    ▀                     \n"
            "                                                  ▀                           "
            << endl << endl;

    cout << "What is your name?: ";
    getline(cin,playerName);
    newPlayer.playerIntro(playerName);

    cout << endl;

    cout << "You have encountered a " << newMonst->GetName() << "!" << endl;
    cout << newMonst->GetDesc() << endl;
}