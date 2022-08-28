#include <iostream>
using namespace std;

int main()
{
    int batas, i, j;

    cout << "\t Membuat Pola Segitiga Bagian 3 \n\n";

    cout << " Masukkan Batas Nilai Segitiga : ";
    cin >> batas;

    for(i = 1; i <= batas; i++){

        for(j = batas; j >= i; j--){

            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}
