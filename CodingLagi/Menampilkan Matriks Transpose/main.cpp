#include <iostream>
using namespace std;

int main()
{
    int a[10][10], baris, kolom;

    cout << "\n\t Menampilkan Matriks Transpose \n\n";

    cout << " Input Jumlah Baris : ";
    cin >> baris;

    cout << " Inputkan Jumlah Kolom : ";
    cin >> kolom;

    cout << endl;

    for(int i = 0; i < baris; i++){

        for(int j = 0; j < kolom; j++){

            cout << " Inputkan Data [ " << i << ", " << j << " ] : ";
            cin >> a[i][j];
        }
    }

    cout << "\n Matriks sebelum di Transpose : \n\n";

    for(int i = 0; i < baris; i++){

        for(int j = 0; j < kolom; j++){

            cout << "   " << a[i][j] << "  ";
        }

        cout << endl << endl;
    }

    cout << "\n Matriks setelah di Transpose : \n\n";

    for(int i = 0; i < baris; i++){

        for(int j = 0; j < kolom; j++){

            cout << "   " << a[j][i] << "  ";
        }

        cout << endl << endl;
    }
        return 0;
}
