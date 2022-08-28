#include <iostream>

using namespace std;

int main()
{

    int angka[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "\t Menampilkan Ganjil & Genap pada Data Array \n";

    cout << "\nGanjil : ";
    for(int i = 0; i < 10; i++)
    {

        if(angka[i] % 2 != 0)
        {

            cout << angka[i] << ", ";
        }

    }

    cout << "\nGenap  : ";
    for(int j = 0; j < 10; j++)
    {

        if(angka[j] % 2 == 0)
        {

            cout << angka[j] << ", ";
        }
    }
    return 0;
}
