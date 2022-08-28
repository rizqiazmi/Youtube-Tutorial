#include <iostream>

using namespace std;

int main()
{
    int batas;

    cout << "\n\t Membuat Pola Ketupat dengan Angka \n\n";

    cout << " Masukkan batas nilainya : ";
    cin >> batas;

    cout << endl;

    for(int i = 1; i <= batas; i++){

        for(int j = batas; j > i; j--){

            cout << " ";
        }

        for(int k = 1; k <= (2 * i - 1); k++){

            cout << k << "";
        }

        cout << endl;
    }

    for(int i = 2; i <= batas; i++){

        for(int j = 1; j < i; j++){

            cout << " ";
        }

        for(int k = i; k <= (2 * batas - i); k++){

            cout << k << "";
        }

        cout << endl;
    }

    cout << endl;
    return 0;
}
