#include <iostream>
#include <string>
using namespace std;

// class tanpa constructor
class Polos{
    public:
        string dataString;
        int dataInteger;
};

// class dengan constructor
class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;
        double IPK;

        // ini adalah constructor
        //Mahasiswa(){
        //    cout << "ini adalah constructor" << endl;
        //}

        // constructor dengan parameter
        Mahasiswa(string inputNama, string inputNIM, string inputJurusan, double inputIPK){
            Mahasiswa::nama = inputNama;
            Mahasiswa::NIM = inputNIM;
            Mahasiswa::jurusan = inputJurusan;
            Mahasiswa::IPK = inputIPK;

            cout << Mahasiswa::nama << endl;
            cout << Mahasiswa::NIM << endl;
            cout << Mahasiswa::jurusan << endl;
            cout << Mahasiswa::IPK << endl;
        }
};

int main(int argc, char const *argv[])
{
    Mahasiswa mahasiswa1 = Mahasiswa("ucup","12312313","Teknik Informatika",4.0);
    cout << endl;
    Mahasiswa mahasiswa2 = Mahasiswa("Otong","12412412","Teknik Komputer",3.0);

/*    Polos objectPolos;
    objectPolos.dataString = "polos";
    objectPolos.dataInteger = 0;

    cout << objectPolos.dataString << endl;
    cout << objectPolos.dataInteger << endl;
*/
    return 0;
}
