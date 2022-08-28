#include <iostream>

using namespace std;

int faktorial_iteratif(int n){

    int hasil = 1;

    for(int i = 1; i <= n; i++){

        hasil = hasil * i;
    }

    return hasil;
}

int faktorial_rekursif(int a){

    if(a <= 1){

        return 1;
    }

    else {

        return a * faktorial_rekursif(a - 1);
    }
}

int main()
{
    int iteratif, rekursif;

    cout << "\n\t Hitung Faktorial dengan Iteratif & Rekursif \n";

    cout << "\n Nilai iteratif : ";
    cin >> iteratif;

    cout << "\n Nilai rekursif : ";
    cin >> rekursif;

    cout << "\n Hasil faktorial iteratif : " << faktorial_iteratif(iteratif);

    cout << "\n Hasil faktorial rekursif : " << faktorial_rekursif(rekursif);

    cout << endl << endl;
    return 0;
}
