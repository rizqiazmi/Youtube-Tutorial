#include <iostream>

using namespace std;

int main()
{
    int batasDeret, i = 1, sum = 0;

    cout << "\n\t Menjumlahkan Deret dengan Looping While \n\n";

    cout << " Masukkan batas deret : ";
    cin >> batasDeret;

    cout << "\n Deretnya : ";

    while(i <= batasDeret){

        cout << sum << " + ";

        sum = sum + i;

        i++;
    }

    cout << endl << endl;

    return 0;
}
