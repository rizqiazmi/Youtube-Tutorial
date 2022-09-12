#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

// Penjabaran method
Player::Player(const char* name){
    this->Player::name = name;
}

void Player::display(){
    cout << "Nama Player: " << this->name << endl;
}

string Player::getName(){
    return this->name;
}

void Player::setName(const char* name){
    this->name = name;
}
