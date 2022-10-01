#include <iostream>

using namespace std;

int main(){

    int i;

    cout << "\n\t Tampil Bilangan Ganjil dari 1-20 dengan While \n\n";

    cout << " Hasilnya : ";

    while(1)
    {
        if(i % 2 == 1){

            cout << i << ", ";
        }

        i += 1;

        if(i >= 20)
        {

            break;
        }
    }

    cout << endl << endl;
    return 0;
}
