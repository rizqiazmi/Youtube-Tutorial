#include <iostream>

using namespace std;

int main()
{
    int jumlah;

    cout << " Masukkan Jumlah Anak Ayam : ";
    cin >> jumlah;

    cout << endl;

    cout << "\t Lagu Anak Ayam \n";

    for(int i = jumlah; i > 1; i--){

        cout << "\n Anak ayam turun " << i << ", mati satu tinggal " << i -1;
    }

    cout << "\n Anak ayam turun 1, mati satu tinggal induknya";
    return 0;
}
