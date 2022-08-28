#include <iostream>

using namespace std;

int main()
{
    int a, b, i, j;

    cout << "\t Membuat Pola Segitiga Bagian 2 \n\n";

    cout << " Masukkan Batas Nilai Segitiga : ";
    cin >> a;

    for(i = 1; i <= a; i++){

        for(j = a; j >= i; j--){

            cout << " ";
        }

        for(b = 1; b <= i; b++){

            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
