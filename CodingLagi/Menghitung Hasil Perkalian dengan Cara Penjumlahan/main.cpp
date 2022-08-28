#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b;
    int jumlah = 0;

    cout << "\t Hitung Hasil Perkalian dengan Cara Penjumlahan \n\n";

    cout << " Masukkan Nilai A : ";
    cin >> a;

    cout << " Masukkan Nilai B : ";
    cin >> b;

    for(int i = 1; i <= abs(b); i++){

        jumlah = jumlah + a;

        if(b < 0){

            jumlah = jumlah;
        }
    }

    cout << "\n Hasil Perkaliannya : " << jumlah;
    return 0;
}
