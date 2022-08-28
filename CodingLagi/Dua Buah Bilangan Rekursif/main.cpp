#include <iostream>

using namespace std;

int kali(int a, int b)
{

    if(b == 1)
    {

        return a;
    }
    else
    {

        return a + kali(a, b - 1);
    }
}

int main()
{

    int angka1, angka2, hasil;

    cout << "\t Megalikan dua Buah Bilangan secara Rekursif \n\n";

    cout << " Masukkan Sebuah Angka : ";
    cin >> angka1;

    cout << " Mau dikali Berapa     : ";
    cin >> angka2;

    hasil = kali(angka1, angka2);

    cout << "\n Hasil Perkaliannya   : " << hasil;

    return 0;
}
