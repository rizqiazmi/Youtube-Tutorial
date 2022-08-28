#include <iostream>
using namespace std;

int main()
{

    int data[] = {5, 8, 4, 2, 6, 3, 10, 7, 9, 1};
    int cari;

    cout << "\t Mencari Nilai pada Data Array \n\n";

    cout << " Isi Datanya : ";
    for(int i = 0; i < 10; i++)
    {
        cout << data[i] << ", ";
    }

    cout << "\n\n Cari Nilai Berapa : ";
    cin >> cari;

    for(int j = 0; j < 10; j++)
    {
        if(cari == data[j])
        {
            cout << "\n Data dengan Nilai " << cari << " terdapat Index ke-" << j;
        }
    }
    return 0;
}
