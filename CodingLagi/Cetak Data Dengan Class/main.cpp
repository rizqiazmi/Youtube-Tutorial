#include <iostream>

using namespace std;

class mahasiswa {

    public:

    string nama;
    int nim, nilai;

    void cetakData(){

        cout << "\t Data Setelah Dicetak \n";

        cout << "\n Nama Mahasiswa  : " << nama;
        cout << "\n NIM Mahasiswa   : " << nim;
        cout << "\n Nilai Mahasiswa : " << nilai;
    }

};

int main()
{
    string nama;
    int nim, nilai;

    mahasiswa mhs;

    cout << "\t Inputkan Data-Data Mahasiswa \n\n";

    cout << " Inputkan Nama : ";
    cin >> mhs.nama;

    cout << " Input NIM     : ";
    cin >> mhs.nim;

    cout << " Input Nilai   : ";
    cin >> mhs.nilai;

    cout << endl << endl;

    mhs.cetakData();
    return 0;
}
