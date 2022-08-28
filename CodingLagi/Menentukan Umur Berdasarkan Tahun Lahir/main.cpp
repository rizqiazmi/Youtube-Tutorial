#include <iostream>

using namespace std;

int main()
{
    int tahunLahir, tahunSekarang, umur;

    cout << "\t Menentukan Umur Berdasarkan Tahun Lahir \n\n";

    cout << " Masukkan Tahun Lahir Kamu : ";
    cin >> tahunLahir;

    cout << " Masukkan Tahun Sekarang   : ";
    cin >> tahunSekarang;

    umur = tahunSekarang - tahunLahir;

    cout << "\n Umur kamu sekarang " << umur << " Tahun :)";
    return 0;
}
