#include <iostream>

using namespace std;

int main()
{
    int A[6] = {1, 2, 3, 4, 5, 6};
    int B[3];
    int C[3];

    cout << "\n\t Menyalin Setengah Elemen Array \n\n";

    cout << " Elemen A : ";
    for(int i = 0; i < 6; i++){

        cout << " " << A[i];
    }

    cout << "\n Elemen B : ";
    for(int j = 0; j < 6; j++){

        if(j <= 2){

            B[j] = A[j];
            cout << " " << B[j];
        }
        else{

            C[j] = A[j];
        }
    }

    cout << "\n Elemen C : ";
    for(int k = 0; k < 6; k++){

        if(k <= 2){

            B[k] = A[k];
        }

        else{

            C[k] = A[k];

            cout << " " << C[k];
        }
    }

    cout << endl << endl;
    return 0;
}
