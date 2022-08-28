#include <iostream>

using namespace std;

int main()
{
    int dollar;
    float rupiah;

    cout << "\t Konversi Dollar($) ke RUpiah(Rp) \n\n";

    cout << " Masukkan Besaran Dollar : $ ";
    cin >> dollar;

    rupiah = dollar * 14230;

    cout << "\n Hasil Konversi Dollar ke Rupiah : Rp." << rupiah;

    return 0;
}
