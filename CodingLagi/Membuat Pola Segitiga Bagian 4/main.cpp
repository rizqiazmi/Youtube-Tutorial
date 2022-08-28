#include <iostream>

using namespace std;

int main()
{
    int batas, i, j, k;

    cout << "\t Membuat Pola Segitiga Bagian 4 \n\n";

    cout << " Masukkan Batas Nilai Segitiga : ";
    cin >> batas;

    for(i = 1; i <= batas; i++){

        for(j = 1; j <= i; j++){

            cout << " ";
        }

        for(k = batas; k >= i; k--){

            cout << "*";
        }

        cout << endl;
    }
    return 0;
}
