#include <iostream>
#include <string>

#include "Player.h"
#include "Weapon.h"
using namespace std;

int main(int argc, char const *argv[]) {

    Player* player1 = new Player("Sniper");
    Weapon* weapon1 = new Weapon("Senapan",50);

    // implementasi setter untuk menggunakan senjata
    player1->equipWeapon(weapon1);

    player1->display();

    return 0;
}
