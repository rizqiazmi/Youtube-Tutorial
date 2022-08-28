#include <iostream>

using namespace std;

int faktorial(int n){

    if(n <= 1){
        cout << n;
        return n;
    }
    else
    {
        cout << "" << n << " x ";
        return n * faktorial(n - 1);
    }
}

int main(){

    int angka, hasil;

    cout << "\t Bilangan Faktorial \n\n";

    cout << " Masukkan Angka : ";
    cin >> angka;

    hasil = faktorial(angka);
    cout << "\n\n Hasil Faktorialnya : " << hasil;
    return 0;
}
