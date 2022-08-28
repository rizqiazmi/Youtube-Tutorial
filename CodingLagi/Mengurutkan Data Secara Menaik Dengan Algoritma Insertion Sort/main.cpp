#include <iostream>

using namespace std;

void insertionSort_menaik(int data[], int n){

    int i, j, hasil;
    bool found;

    for(i = 1; i < n; i++){

        hasil = data[i];

        j = i - 1;

        found = false;

        while(j >= 0 && ! found){

            if(hasil < data[j]){

                data[j + 1] = data[j];

                j = j - 1;
            }
            else{

                found = true;
            }
        }

        data[j + 1] = hasil;
    }
}

int main()
{
    int data[10], n;

    cout << "\t Mengurutkan Data secara Menaik dengan Algoritma Insertion Sort \n\n";

    cout << " Masukkan Banyak Data : ";
    cin >> n;

    cout << endl;

    for(int i = 0; i < n; i++)
    {
        cout << " Data ke " << i + 1<< " : ";
        cin >> data[i];
    }

    cout << "\n Data Sebelum Diurutkan : ";

    for(int i = 0; i < n; i++){

        cout << data[i] << " ";
    }

    insertionSort_menaik(data, n);


    cout << "\n Data Setelah Diurutkan : ";

    for(int i = 0; i < n; i++){

        cout << data[i] << " ";
    }
    return 0;
}
