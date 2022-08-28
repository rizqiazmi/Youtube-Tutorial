#include <iostream>

using namespace std;

int main(){

    float luas_alas, keliling_alas, tinggi;
    float luasP, volume;

    cout << "\t Hitung Luas Permukaan & Volume Prisma Segitiga \n\n";

    cout << " Masukkan Luas Alas     : ";
    cin >> luas_alas;
    cout << " Masukkan Keliling Alas : ";
    cin >> keliling_alas;
    cout << " Masukkan Tinggi        : ";
    cin >> tinggi;

    luasP = (2 * luas_alas) + (keliling_alas * tinggi);
    cout << "\n Hasil Luas Permukaanya : " << luasP;

    volume = luas_alas * tinggi;
    cout << "\n Hasil Volumenya        : " << volume;

    return 0;
}
