#include <iostream>

using namespace std;

int main()
{
    string nama;
    int jumlahJamKerja, jumlahKaryawan;

    float jamNormal, upahPerjam, upahLembur, upahTotal;
    char golongan;

    jamNormal = 24; // Jam biasanya karyawan bekerja
    upahLembur = 10000;// Upah tambahan saat karyawan lembur

    cout << "\n\t Menghitung Upak Karyawan \n\n";

    cout << " Masukkan jumlah karyawan : ";
    cin >> jumlahKaryawan;

    cout << endl;

    for(int i = 1; i <= jumlahKaryawan; i++){

        cout << " Nama karyawan " << i << "  : ";
        cin >> nama;

        cout << " Golongan         : ";
        cin >> golongan;

        cout << " Jumlah jam kerja : ";
        cin >> jumlahJamKerja;

        if(golongan == 'a'){

            upahPerjam = 7000;
            cout << "\n Upah " << nama << " perjam      = Rp. " << upahPerjam;
        }
        else if(golongan == 'b'){

            upahPerjam = 6000;
            cout << "\n Upah " << nama << " perjam      = Rp. " << upahPerjam;
        }
        else if(golongan == 'c'){

            upahPerjam = 5000;
            cout << "\n Upah " << nama << " perjam      = Rp. " << upahPerjam;
        }
        else {

            cout << "\n Golongan yang anda masukkan SALAH !!!";
        }

        if(jumlahJamKerja >= jamNormal){// Artinya saat lembur

            upahTotal = jamNormal * upahPerjam + upahLembur;
            cout << "\n Upah " << nama << " saat lembur = Rp. " << upahTotal;
        }
        else {// Artinya saat tidak lembur / biasanya

            upahTotal = jumlahJamKerja * upahPerjam;
            cout << "\n Upah " << nama << " biasanya = Rp. " << upahTotal;
        }

        cout << endl << endl << endl;
    }
    return 0;
}
