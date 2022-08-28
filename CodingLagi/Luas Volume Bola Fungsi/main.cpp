#include <iostream>
using namespace std;

float luasPermukaan(float r){

    float phi = 3.14;

    float hasil_luas = 4 * phi * r * r;

    return hasil_luas;
}

float volumeBola(float r){

    float phi = 3.14;

    float hasil_volume = 4 /(float) 3 * phi * r * r * r;

    return hasil_volume;
}

int main()
{
    float phi = 3.14;
    float jari, luasP, volume;

    cout << "\t Luas Permukaan dan Volume Bola \n\n";

    cout << " Masukkan Jari-jari : ";
    cin >> jari;

    luasP = luasPermukaan(jari);
    cout << "\n Luas Permukaannya : " << luasP;

    volume = volumeBola(jari);
    cout << "\n Volume Bolanya    : " << volume;

    return 0;
}
