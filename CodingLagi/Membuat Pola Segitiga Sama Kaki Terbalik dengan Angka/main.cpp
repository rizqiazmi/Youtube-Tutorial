#include <iostream>

using namespace std;

int main()
{
    int batas, i, j, k;

    cout << "\n\t Pola Segitiga Samakaki Terbalik dengan Angka \n\n";

    cout << " Masukkan batas nilainya : ";
    cin >> batas;

    cout << endl;

    for(i = 1; i <= batas; i++){

        for(j = 1; j < i; j++){

            cout << " ";
        }

        for(k = i; k <= (2 * batas - i); k++){

            cout << k << "";
        }

        cout << endl;
    }

    cout << endl;
    return 0;
}
