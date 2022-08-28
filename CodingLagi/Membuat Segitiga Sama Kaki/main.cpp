#include <iostream>

using namespace std;

int main()
{
    int batas;

    cout << "\n\t Membuat Pola Segitiga Sama Kaki \n\n";

    cout << " Input Batas Segitiga : ";
    cin >> batas;

    cout << endl;

    for(int i = 1; i <= batas; i++){

        for(int j = batas; j > i; j--){

            cout << " ";
        }

        for(int k = 1; k <= (2 * i - 1); k++){

            cout << "*";
        }

        cout << endl;
    }
    return 0;
}
