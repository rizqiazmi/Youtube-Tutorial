#include <iostream>

using namespace std;

int main()
{
    string password = "123abc";
    string kataSandi;
    bool benar;
    int count; // berapa kali kata sandi diinputkan

    cout << "\t Program Validasi Password Sederhana \n\n";

    count = 1; // Nilai Awal

    while(!benar && count <= 3){

        cout << " Input Kata Sandi : ";
        cin >> kataSandi;

        // Validasi Passwordnya
        if(kataSandi == password){

            benar = true;
            cout << "\n Kata Sandi Sesuai / Valid";
        }
        else {

            count = count + 1; // jika salah

            //jika inputan password lebih dari 3 kali
            if(count == 4){

                cout << "\n Account Anda Terblokir \n";
            }
        }
    }
    return 0;
}
