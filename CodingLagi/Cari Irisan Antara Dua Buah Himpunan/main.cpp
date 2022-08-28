#include <iostream>

using namespace std;

int main()
{
    int anggotaA[20], anggotaB[20];
    int himpunanA, himpunanB;

    cout << "\t Mencari Irisan Diantara 2 Himpunan \n\n";

    cout << " Jumlah Anggota Himpunan A : ";
    cin >> himpunanA;

    for(int i = 0; i < himpunanA; i++){
        cout << " Masukkan Anggota " << i + 1 << " : ";
        cin >> anggotaA[i];
    }

    // Cetak Anggota Himpunan A
    cout << "\n Anggota Himpunan A = { ";
    for(int i = 0; i < himpunanA; i++){
        cout << anggotaA[i] << " ";
    }
    cout << "}";

    cout << endl << endl;

    cout << " Jumlah Anggota Himpunan B : ";
    cin >> himpunanB;

    for(int i = 0; i < himpunanB; i++){

        cout << " Masukkan Anggota " << i + 1 << " : ";
        cin >> anggotaB[i];
    }

    // Cetak Anggota Himpunan B
    cout << "\n Anggota Himpunan B = { ";
    for(int i = 0; i < himpunanB; i++){
        cout << anggotaB[i] << " ";
    }

    cout << ")";

    // mencari irisannya
    cout << "\n\n Irisan dari Anggota Himpunan A dan B = { ";
    for(int i = 0; i < himpunanA; i++){

        for(int j = 0; j < himpunanB; j++){

            if(anggotaA[i] == anggotaB[j]){

                cout << anggotaA[i] << ", ";
            }
        }
    }

    cout << "}";
    return 0;
}
