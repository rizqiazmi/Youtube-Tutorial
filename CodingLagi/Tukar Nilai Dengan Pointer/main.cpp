#include <iostream>

using namespace std;

void tukarNilai(int *a, int *b){

    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;

    cout << "\t Tukar Nilai dengan Pointer \n\n";

    cout << " Masukkan Nilai a : ";
    cin >> a;

    cout << " Masukkan Nilai b : ";
    cin >> b;

    cout << "\n Nilai Sebelum Ditukar \n";
    cout << "\n Nilai a : " << a;
    cout << "\n Nilai b : " << b;

    tukarNilai(&a, &b);

    cout << "\n\n Nilai Setelah Ditukar \n";
    cout << "\n Nilai a : " << a;
    cout << "\n Nilai b : " << b;
    return 0;
}
