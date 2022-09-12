#include "Mahasiswa.h"
#include <iostream>

// constructor selalu public
Mahasiswa::Mahasiswa(const char* name){
    this->namePublic = name;
    this->namePrivate = name;
}

void Mahasiswa::showDisplay(){
    cout << "Nama Mahasiswa : " << this->namePrivate << endl;
}
void Mahasiswa::showDisplayPrivate(){
    cout << "Nama Mahasiswa : " << this->namePrivate << endl;
}
