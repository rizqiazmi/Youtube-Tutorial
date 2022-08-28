#include <iostream>

using namespace std;

int main()
{
    int a1, b1; // untuk nilai pecahan atas
    int a2, b2; // untuk nilai pecahan bawah

    int hasil1, hasil2;

    cout << "\t Menjumlahkan Dua Buah Pecahan \n\n";

    cout << " Nilai Atas Pecahan A : ";
    cin >> a1;
    cout << " Nilai Bawah Pecahan A : ";
    cin >> a2;

    cout << endl;

    cout << " Nilai Atas Pecahan B : ";
    cin >> b1;
    cout << " Nilai Bawah Pecahan B : ";
    cin >> b2;

    hasil1 = a1 * b2 + a2 * b1; // hitung pecahan atas
    hasil2 = a2 * b2;         // hitung pecahan bawah

    cout << endl;
    cout << "                        " << a1 << "   " << b1 << "   " << hasil1;
    cout << "\n Hasil Perhitungannya:  -" << " + - " << "= --" << endl;
    cout << "                        " << a2 << "   " << b2 << "   " << hasil2;

    return 0;
}
