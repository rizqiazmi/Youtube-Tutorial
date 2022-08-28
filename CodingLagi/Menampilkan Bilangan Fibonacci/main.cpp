#include <iostream>

using namespace std;

int main()
{
    int bilangan;

    cout << "\t Menampilkan Bilangan Fibonacci \n\n";

    cout << " Masukkan Bilangan : ";
    cin >> bilangan;

    cout << "\n Bilangan Fibonacci dari " << bilangan;

    cout << "\n = 0, 1";

    int f1 = 0;
    int f2 = 1;

    while(true){
        int hasil = f2 + f1;

        if(hasil > bilangan){

            break;
        }

        cout << ", " << hasil;

        f1 = f2;
        f2 = hasil;
    }
    return 0;
}
