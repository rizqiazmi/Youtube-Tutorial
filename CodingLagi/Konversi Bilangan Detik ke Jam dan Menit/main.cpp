#include <iostream>

using namespace std;

int main()
{
    int jam, menit, detik;
    int sisa;

    cout << "\t Konversi Bilangan Detikke Jam dan Menit \n\n";

    cout << " Masukkan Jumlah Detk : ";
    cin >> detik;

    jam = detik / 3600; // Konversi ke Jam

    sisa = detik % 3600; // Sisa Detik Hasil Konversi ke Jam

    menit = sisa / 60; // Konversi ke Menit

    cout << "\n Hasil Konversi : " << jam << " Jam, " << menit << " Menit";
    return 0;
}
