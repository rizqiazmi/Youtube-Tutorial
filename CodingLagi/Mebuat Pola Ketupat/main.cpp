#include <iostream>

using namespace std;

int main()
{
    int batas;

    cout << "\n\t Membuat Pola Ketupat \n\n";

    cout << " Input Batas Pola : ";
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

    for(int i = 2; i <= batas; i++){

        for(int j = 1; j < i; j++){

            cout << " ";
        }

        for(int k = batas; k >= (2 * i - batas); k--){

            cout << "*";
        }

        cout << endl;
    }

    cout << endl;
    return 0;
}
