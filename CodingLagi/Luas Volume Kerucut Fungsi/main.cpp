#include <iostream>
using namespace std;

float luasP_kerucut(float r, float s){

    float phi = 3.14;

    float hasil_luasP = phi * r * (r + s);
    return hasil_luasP;
}

float volume_kerucut(float r, float t){

    float phi = 3.14;

    float hasil_volume = 1/(float) 3 * phi * r * r * t;
    return hasil_volume;
}

int main()
{
    float jari, tinggi, s; // s = Panjang Garis Pelukis
    float luasP, volume;

    cout << "\t Luas & Volume Kerucut \n\n";

    cout << " Masukkan Jari-jari     : ";
    cin >> jari;

    cout << " Masukkan Tinggi        : ";
    cin >> tinggi;

    cout << " Masukkan Panjang Garis : ";
    cin >> s;

    luasP = luasP_kerucut(jari, s);
    cout << "\n Luas Permukaanya     : " << luasP;

    volume = volume_kerucut(jari, tinggi);
    cout << "\n Volume Kerucut       : " << volume;
    return 0;
}
