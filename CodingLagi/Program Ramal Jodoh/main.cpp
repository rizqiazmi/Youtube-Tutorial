#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{
    string lakiLaki, perempuan;
    int hasil;

    cout << "\t Program Ramal Jodoh \n\n";

    cout << " Masukkan Nama Laki-laki : ";
    cin >> lakiLaki;
    cout << " Masukkan Nama Perempuan : ";
    cin >> perempuan;

    srand((int)time(0));

    int i = 0;
    while(i++ < 1)
    {
        int r = (rand() % 100) + 1;

        hasil = r;
    }

    cout << "\n Hasil Ramalan : " << hasil << "%";
    cout << endl
         << endl;

    if(hasil <= 100 && hasil >= 50)
    {
        cout << "\t\t\t** SELAMAT KAMU BERJODOH **\n"
             << endl;

        cout << "\t\t\t+=    * *     * *    =+        =+   " << endl;
        cout << "\t\t\t+=   *   *  *    *   =+        =+   " << endl;
        cout << "\t\t\t+=   *     *     *   =+        =+   " << endl;
        cout << "\t\t\t+=    *         *    =+        =+   " << endl;
        cout << "\t\t\t+=     *       *     =+        =+   " << endl;
        cout << "\t\t\t+=       *   *       =+        =+   " << endl;
        cout << "\t\t\t+=         *         =+=+=+=+=+=+   " << endl;
    }
    else
    {
        cout << "\t\t\t** MAAF!!! ANDA BELUM JODOH **\n"
             << endl;

        cout << "\t\t\t+=+=     =+   +=+=+=+=+=    * *     * *" << endl;
        cout << "\t\t\t+= =+    =+  +=  ____  =+  *   *  *    *" << endl;
        cout << "\t\t\t+=  +=   =+  += |    | =+  *     *     *" << endl;
        cout << "\t\t\t+=   =+  =+  += |    | =+   *         *" << endl;
        cout << "\t\t\t+=    += =+  += |____| =+    *       *" << endl;
        cout << "\t\t\t+=     =+=+  +=        =+      *   *" << endl;
        cout << "\t\t\t+=      +=+   +=+=+=+=+=         *" << endl;
    }
    return 0;
}
