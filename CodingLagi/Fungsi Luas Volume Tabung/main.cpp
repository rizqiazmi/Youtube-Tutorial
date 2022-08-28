#include <iostream>

using namespace std;
float luasP_tabung(float r, float t)
{
    float phi = 3.14;

    float hasil_luas = 2 * phi * r * (r + t);
    return hasil_luas;
}

float volume_tabung(float r, float t)
{

    float phi = 3.14;

    float hasil_volume = phi * r * r * t;
    return hasil_volume;
}


int main()
{
    float phi = 3.14;
    float jari, tinggi, luasP, volume;

    cout << "\t Hitung Luas Permukaan & Volume Tabung \n\n";

    cout << " Masukkan Jari-jari : ";
    cin >> jari;

    cout << " Masukkan Tinggi    : ";
    cin >> tinggi;

    luasP = luasP_tabung(jari, tinggi);
    cout << "\n Luas Permukaanya : " << luasP;

    volume = volume_tabung(jari, tinggi);
    cout << "\n Volume Tabungnya : " << volume;

    return 0;
}
