#include <iostream>
using namespace std;

int fibonacci(int n);

int main(){
    int angka,hasil;
    cout << "menghitung fibonacci ke : ";
    cin >> angka;
    hasil = fibonacci(angka);

    cout << "nilainya adalah : ";
    cout << hasil << endl;
//  cin.get();
    return 0;
}

int fibonacci(int n){
    cout << "fungsi fibonacci " << n << endl;
    if((n == 0 )||(n == 1)){
        return n;
    }else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
