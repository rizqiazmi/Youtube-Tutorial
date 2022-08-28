#include <iostream>

using namespace std;

int main()
{
    int n, x[10];
    float jumlah, rerata;

    cout << "\t Menghitung Rerata Nilai dengan Array \n\n";

    cout << " Inputkan Batas Nilai : ";
    cin >> n;
    cout << endl;

    for(int i = 1; i <= n; i++){

        cout << " Nilai ke-" << i << " : ";
        cin >> x[i];
    }

    cout << "\n Isi Datanya : ";
    for(int i = 1; i <= n; i++){

        cout << x[i] << ", ";
    }

    jumlah = 0;
    for(int i = 1; i <= n; i++){

        jumlah = jumlah + x[i];
    }

    rerata = jumlah / n;
    cout << "\n\n Nilai Reratanya : " << rerata;
    return 0;
}
