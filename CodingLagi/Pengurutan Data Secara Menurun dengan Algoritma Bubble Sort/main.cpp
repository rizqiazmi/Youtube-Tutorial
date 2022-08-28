#include <iostream>
using namespace std;

void tukarData(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort_menurun(int data[], int n)
{

    for(int i = 0; i < n; i++)
    {

        for(int j = i + 1; j < n; j++)
        {

            if(data[i] < data[j])
            {

                tukarData(&data[i], &data[j]);
            }
        }
    }
}

int main()
{
    int data[10], n;

    cout << "\t Mengurutkan Data secara Menurun dengan Algoritma Bubble Sort \n\n";

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

    bubbleSort_menurun(data, n);

    cout << "\n Data Setelah Diurutkan : ";
    for(int i = 0; i < n; i++)
    {

        cout << data[i] << " ";
    }
    return 0;
}
