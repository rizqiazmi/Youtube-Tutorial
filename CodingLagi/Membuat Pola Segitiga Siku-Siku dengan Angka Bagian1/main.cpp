#include <iostream>

using namespace std;

int main()
{
    int batas, i, j;

    cout << "\n\t Pola Segitiga Siku-siku dengan Angka (Bagian 1) \n\n";

    cout << " Masukkan batas nilai : ";
    cin >> batas;

    cout << endl;

    for(i = 1; i <= batas; i++){

        for(j = 1; j <= i; j++){

            cout << j<< "";
        }

        cout << endl;
    }

    cout << endl;
    return 0;
}
