#include <iostream>

using namespace std;

int main(){

    float phi = 3.14;
    float rusuk, tinggi, s;
    float luasP, volume;

    cout << "\t Hitung Luas Luas Permukaan dan Volume Kerucut \n\n";

    cout << " Masukkan Rusuk  : ";
    cin >> rusuk;
    cout << " Masukkan Tinggi : ";
    cin >> tinggi;
    cout << " Masukkan S      : ";
    cin >> s;

    luasP = phi * rusuk * (rusuk + s);
    cout << "\n Luas Permukaan Kerucut : " << luasP;

    volume = 1/(float)3 * phi * rusuk * rusuk * tinggi;
    cout << "\n Volume Kerucut         : " << volume;

    return 0;
}
