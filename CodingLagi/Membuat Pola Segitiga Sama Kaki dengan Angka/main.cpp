#include <iostream>

using namespace std;

int main()
{
    int batas, i, j, k;

    cout << "\n\t Pola Segitiga Samakaki dengan Angka \n\n";

    cout << " Masukkan batas nilainya : ";
    cin >> batas;

    cout << endl;

    for(i = 1; i <= batas; i++){

        for(j = batas; j > i; j--){

            cout << " ";
        }

        for(k = 1; k <= (2 * i - 1); k++){

            cout << k << "";
        }

        cout << endl;
    }

    cout << endl;
    return 0;
}
