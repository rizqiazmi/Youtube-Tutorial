#include <iostream>
#include <fstream>
using namespace std;

struct mahasiswa {
    string nama;
    string nim;
    string alamat;
}mhs;

void tampilData(){
    cout << "\n\t Daftar Biodata Mahasiswa \n";

    cout << "\n Nama    : " << mhs.nama;
    cout << "\n NIM     : " << mhs.nim;
    cout << "\n Alamat  : " << mhs.alamat;
}

int main()
{
    ofstream data;
    data.open("biodata.txt");

    cout << "\t Cetak Data Mahasiswa dengan Struct \n\n";

    cout << " Masukkan Nama    : ";
    cin >> mhs.nama;

    cout << " Masukkan NIM     : ";
    cin >> mhs.nim;

    cout << " Masukkan Alamat  : ";
    cin >> mhs.alamat;

    cout << endl;

    data << "\n\t Daftar Biodata Mahasiswa \n";

    data << "\n Nama    : " << mhs.nama;
    data << "\n NIM     : " << mhs.nim;
    data << "\n Alamat  : " << mhs.alamat;

    tampilData();
    return 0;
}
