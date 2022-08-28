#include <iostream>

using namespace std;

int main()
{
    int n, m, i, j;
    string nama;
    float nilai, jumlah, rerata;

    cout << "\t Hitung Nilai Rata-rata Pelajaran Tiap Siswa \n\n";

    cout << " Jumlah Siswa : ";
    cin >> n;

    cout << " Jumlah MP    : ";
    cin >> m;

    i = 1;

    while(i <= n){
        cout << "\n Nama Siswa " << i << " : ";
        cin >> nama;

        j = 1;
        jumlah = 0;

        while(j <= m){

            cout << " Nilai MP " << j << "   : ";
            cin >> nilai;

            jumlah = jumlah + nilai;

            j = j + 1;
        }

        rerata = jumlah / m;

        cout << " Rata-rata Nilai " << nama << " : " << rerata;
        cout << endl;

        i = i + 1;
    }
    return 0;
}
