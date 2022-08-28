#include <iostream>

using namespace std;

void tukarData(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleShort_menaik(int data[], int n)
{

    for(int i = 0; i < n-1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            if(data [i] > data[j])
            {

                tukarData(&data[i], &data[j]);
            }
        }
    }
}

int main()
{
    int data[10], n;

    cout << "\t Pengurutan Data dengan Algoritma Bubble Sort secara Menaik \n\n";

    cout << " Masukkan Banyak Data : ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << " Data ke " << i + 1 << " : ";
        cin >> data[i];
    }

    cout << "\n Data Sebelum Diurutkan : ";

    for(int i = 0; i < n; i++)
    {

        cout << data[i] << " ";
    }

    bubbleShort_menaik(data, n);

    cout << "\n Data Setelah Diurutkan : ";

    for(int i = 0; i < n; i++)
    {

        cout << data[i] << " ";
    }
    return 0;
}
