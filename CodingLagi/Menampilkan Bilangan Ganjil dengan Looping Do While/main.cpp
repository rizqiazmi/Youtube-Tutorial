#include <iostream>

using namespace std;

int main() {
    int i = 0;

    cout << "\n\t Bilangan Ganjil dari 1-20 dengan Do While \n\n";

    cout << " Hasilnya : ";

    do{
        if(i % 2 == 1){
            cout << i << ", ";
        }

        i++;
    }

    while(i <= 20);

    cout << endl << endl;
    return 0;
}
