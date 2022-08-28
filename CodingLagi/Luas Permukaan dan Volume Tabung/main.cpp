#include <iostream>

using namespace std;

int main(){

    float phi = 3.14;
    float rusuk, tinggi, luas, volume;

    cout << "\t Luas Permukaan dan Volume Tabung \n";

    cout << " Masukkan Rusuk  : ";
    cin >> rusuk;
    cout << " Masukkan Tinggi : ";
    cin >> tinggi;

    luas = 2 * phi * rusuk * (rusuk + tinggi);
    cout << "\n Luas Permukaanya : " << luas;

    volume = phi * rusuk * rusuk * tinggi;
    cout << "\n Volumenya        : " << volume;

    return 0;
}
