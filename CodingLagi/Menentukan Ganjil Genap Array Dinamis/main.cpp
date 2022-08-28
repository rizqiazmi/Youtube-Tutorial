#include <iostream>

using namespace std;

int main()
{
    int nilai[5];

    cout << "\t Tentukan Ganjil / Genap Array Dinamis \n\n";

    for(int i = 0; i< 5; i++)
    {
        cout << " Nilai ke-" << i + 1 << " : ";
        cin >> nilai[i];
    }

    cout << endl;

    cout << " Bilangan Genap = ";
    for(int i = 0; i < 5; i++){

        if(nilai[i]% 2 == 0){

            cout << nilai[i] << " ";
        }
    }

    cout << endl;

    cout << " Bilangan Ganjil = ";
    for(int j = 0; j < 5; j++){

        if(nilai[j] % 2 != 0){

            cout << nilai[j] << " ";
        }
    }
    return 0;
}
