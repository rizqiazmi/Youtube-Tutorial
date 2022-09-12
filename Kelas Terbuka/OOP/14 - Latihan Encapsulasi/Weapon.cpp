#include <iostream>
#include "Weapon.h"
#include <string>

Weapon::Weapon(const char* name, double attackPower){
    this->name = name;
    this->attackPower = attackPower;
}

void Weapon::display(){
    cout << "Weapon ini adalah " << this->name << " power = ";
    cout << this->attackPower << endl;
}

string Weapon::getName(){
    return this->name;
}
