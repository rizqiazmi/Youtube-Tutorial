#include <iostream>

using namespace std;

int main(){
    float a,b,hasil;
    char aritmatika;

    cout << "Selamat datang di program calculator \n \n";

    // memasukkan input dari user
    cout << "Masukkan nilai pertama: ";
    cin >> a;
    cout << "Pilih operator +,-,/,* : ";
    cin >> aritmatika;
    cout << "Masukan nilai kedua: ";
    cin >> b;

    cout << "\nHasil perhitungan: ";
    cout << a << aritmatika << b;

    // menggunakan if else
    if (aritmatika == '+'){
        hasil = a + b;
    } else if (aritmatika == '-'){
        hasil = a - b;
    } else if (aritmatika == '/'){
        hasil = a / b;
    } else if (aritmatika == '*'){
        hasil = a * b;
    } else {
        cout << "operator anda salah" << endl;
    }

    // Menggunakan switch
        switch(aritmatika){
        case '+':
            hasil = a+b;
            break;
        case '-':
            hasil = a-b;
            break;
        case '*':
            hasil = a*b;
            break;
        case '/':
            hasil = a/b;
            break;
        default:
        cout << "Operator salah";
        }

    cout << " = " << hasil << endl;

    cin.get();
    return 0;
}
