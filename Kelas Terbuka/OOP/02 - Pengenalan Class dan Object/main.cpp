#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;
        double IPK;
};

int main(int argc, char const *argv[]){

    Mahasiswa data1;
    data1.nama = "ucup";
    data1.NIM = "12312123";
    data1.jurusan = "informatika";
    data1.IPK = 4.00;
    Mahasiswa data2;
    data2.nama = "otong";
    data2.NIM = "123124";
    data2.jurusan = "menjahit";
    data2.IPK = 3.5;
    cout << "nama dari data1    : " << data1.nama << endl;
    cout << "NIM dari data1     : " << data1.NIM << endl;
    cout << "jurusan dari data1 : " << data1.jurusan << endl;
    cout << "IPK dari data1     : " << data1.IPK << endl;
    cout << "\n" << endl;
    cout << "nama dari data2    : " << data2.nama << endl;
    cout << "NIM dari data2     : " << data2.NIM << endl;
    cout << "jurusan dari data2 : " << data2.jurusan << endl;
    cout << "IPK dari data2     : " << data2.IPK << endl;
    return 0;
}
