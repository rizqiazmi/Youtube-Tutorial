#include <iostream>

using namespace std;



int main()
{
    int data;
    float nilai, jumlah, rata;

    cout << "\t Menghitung Jumlah & Rata-rata Nilai \n\n";

    cout << " Masukkan Jumlah Data : ";
    cin >> data;
    cout << endl;

    for(int i = 1; i <= data; i++)
    {
        cout << "Data Nilai ke-" << i << " : ";
        cin >> nilai;

        jumlah += nilai;
    }
    cout << "\n Jumlah Semua Nilainya : " << jumlah;

    rata = jumlah / data;
    cout << "\n Nilai Rata-ratanya    : " << rata;

    return 0;
}
