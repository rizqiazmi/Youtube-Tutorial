#include <iostream>

using namespace std;

int main(){

    int jam, menit, hasil;
    int jam_detik = 3600;
    int jam_menit = 60;

    cout << "\t Konversi Bilangan \n\n";

    cout << " Masukkan Jumlah Jam : ";
    cin >> jam;

    cout << " Masukkan Jumlah Menit : ";
    cin >> menit;

    hasil = jam * jam_detik + menit * jam_menit;

    cout << "\n Hasil Konversinya : " << hasil << " Detik";

    return 0;
}
