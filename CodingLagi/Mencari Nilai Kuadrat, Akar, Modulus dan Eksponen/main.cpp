#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int bilangan;

    cout << "\t Cari Nilai Kuadrat, Akar, Modulus & Eksponen \n\n";

    cout << " Masukkan Sebuah Bilangan : ";
    cin >> bilangan;

    cout << "\n Nilai Kuadratnya  : " << pow(bilangan, 2);

    cout << "\n Nilai Akarnya     : " << sqrt(bilangan);

    cout << "\n Nilai Modulsnya   : " << fmod(bilangan, 2);

    cout << "\n Nilai Eksponennya : " << exp(bilangan);
    return 0;
}
