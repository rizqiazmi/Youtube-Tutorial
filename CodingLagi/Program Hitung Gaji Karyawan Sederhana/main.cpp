#include <iostream>

using namespace std;

int main()
{
    float persenPajak = 0.15, persenTunjangan = 0.2;

    string nama;

    float gajiPokok, gajiBersih, tunjangan, pajak;

    cout << "\n\t Menghitung Gaji Karyawan \n\n";

    cout << " Nama karyawan : ";
    cin >> nama;

    cout << " Gaji pokoknya : Rp. ";
    cin >> gajiPokok;

    tunjangan = persenTunjangan * gajiPokok;
    cout << "\n Tunjangan sebesar      : Rp. " << tunjangan;

    pajak = persenPajak * (gajiPokok + tunjangan);
    cout << "\n Pajaknya sebesar       : Rp. " << pajak;

    gajiBersih = gajiPokok + tunjangan - pajak;
    cout << "\n\n Gaji bersih karyawan : Rp. " << gajiBersih;

    cout << endl;
    return 0;
}
