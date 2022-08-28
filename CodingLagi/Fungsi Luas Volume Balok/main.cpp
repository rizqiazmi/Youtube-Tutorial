#include <iostream>

using namespace std;

int luasBalok(int p, int L, int t)
{
   int hasil = 2 * (p * L + p * t + L * t);
   return hasil;
}

int volumeBalok(int p, int L, int t)
{
    int hasil = p * L * t;
    return hasil;
}

int main()
{
    int panjang, lebar, tinggi, luasPermukaan, volume;

    cout << "\t Luas & Volume Balok \n\n";

    cout << " Masukkan Panjang : ";
    cin >> panjang;
    cout << " Masukkan Lebar   : ";
    cin >> lebar;
    cout << " Masukkan Tinggi  : ";
    cin >> tinggi;

    luasPermukaan = luasBalok(panjang, lebar, tinggi);
    cout << "\n Luas Permukaanya : " << luasPermukaan;

    volume = volumeBalok(panjang, lebar, tinggi);
    cout << "\n Volume Baloknya  : " << volume;


    return 0;
}
