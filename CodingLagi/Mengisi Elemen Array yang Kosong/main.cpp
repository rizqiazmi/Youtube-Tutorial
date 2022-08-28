#include <iostream>

using namespace std;

int main()
{
    int Array1[4] = {1, 2, 3, 4};

    int Array2[6];

    cout << "\n\t Mengisi Elemen Array yg Kosong \n\n";

    cout << " Elemen Array sebelum ditambahkan : ";

    for(int i = 0; i < 4; i++){

    cout << Array1[i] << " ";
    }

    cout << endl;

    for(int j = 0; j < 6; j++){

        Array2[j] = Array1[j];

        if(j == 4 || j == 5){

            cout << "\n Isi elemen array pada baris ke " << j + 1 << " : ";
            cin >> Array2[j];
        }
    }

    cout << "\n Elemen array setelah ditambahkan : ";

    for(int k = 0; k < 6; k++){

        cout << Array2[k] << " ";
    }

    cout << endl << endl;
    return 0;
}
