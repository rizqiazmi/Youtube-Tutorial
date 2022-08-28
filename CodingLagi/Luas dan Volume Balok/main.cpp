#include <iostream>

using namespace std;

int main(){

    int panjang, lebar, tinggi;
    int luas, volume;

    cout << "\t Hitung Luas dan Volume Balok \n\n";

    cout << " Masukkan Panjang : ";
    cin >> panjang;
    cout << " Masukkan Lebar   : ";
    cin >> lebar;
    cout << " Masukkan Tinggi  : ";
    cin >> tinggi;

    luas = 2 * (panjang * lebar + lebar * tinggi + panjang * tinggi);
    cout << "\n Luas dari Balok   : " << luas;

    volume = panjang * lebar * tinggi;
    cout << "\n Volume dari Balok : " << volume;

    return 0;
}
