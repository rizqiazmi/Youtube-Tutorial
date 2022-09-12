#include <iostream>
#include <string>
#include "Player.h"

Player::Player(const char* name){
    this->name = name;
    this->level = 1;
    this->exp = 0;
    this->attackPower = 100;
}

// getter, ini artinya kita akan membuat attribute menjadi read only
string Player::getName(){
    return this->name;
}

// setter, ini untuk write data ke class
void Player::addExperience(int expValue){
    int maxExp = 100;
    cout << "Mendapatkan exp = " << expValue << endl;
    this->exp += expValue;
    if(this->exp >= maxExp){
        // maka dia level up
        this->level++;
        this->attackPower += 100;
        cout << "LEVEL UP" << endl;
        this->exp = 0;
    }
}

void Player::display(){
    cout << "Name     : " << this->name << endl;
    cout << "Level    : " << this->level << endl;
    cout << "Exp      : " << this->exp << endl;
    cout << "Attack\t : " << this->attackPower << endl;
}
