#include <iostream>

using namespace std;

int main()
{
    float celcius, fahrenheit, kelvin, reamur;

    cout << "\t Konversi Satuan Celcius ke Fahrenheit, Kelvin, & Reamur \n\n";

    cout << " Masukkan Nilai Satuan Celcius : ";
    cin >> celcius;

    fahrenheit = 9 /(float) 5 * celcius + 32;
    cout << "\n Nilai Satuan Fahrenheitnya : " << fahrenheit;

    kelvin = celcius + 273;
    cout << "\n Nilai Satuan Kelvinnya  : " << kelvin;

    reamur = 4 /(float) 5 * celcius;
    cout << "\n Nilai Satuan Reamurnya  : " << reamur;
    return 0;
}
