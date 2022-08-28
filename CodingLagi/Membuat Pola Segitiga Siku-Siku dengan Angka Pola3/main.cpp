#include <iostream>

using namespace std;

int main()
{
    int batas, i, j;

    cout << "\n\t Pola Segitiga Siku-siku dengan Angka (Pola 3) \n\n";

    cout << " Masukkan batas nilainya : ";
    cin >> batas;

    cout << endl;

    for(i = 1; i <= batas; i++){

        for(j = i; j <= batas; j++){

            cout << j << "";
        }

        cout << endl;
    }

    cout << endl;
    return 0;
}
