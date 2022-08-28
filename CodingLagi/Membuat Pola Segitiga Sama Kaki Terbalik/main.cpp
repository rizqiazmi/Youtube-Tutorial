#include <iostream>

using namespace std;

int main()
{
    int batas;

    cout << "\n\t Membuat Pola Segitiga Sama Kaki Terbalik \n\n";

    cout << " Inputkan Batas Segitiga : ";
    cin >> batas;

    cout << endl;

    for(int i = 1; i <= batas; i++){

        for(int j = 1; j < i; j++){

            cout << " ";
        }

        for(int k = batas; k >= (2 * i - batas); k--){

            cout << "*";
        }

        cout << endl;
    }
    return 0;
}
