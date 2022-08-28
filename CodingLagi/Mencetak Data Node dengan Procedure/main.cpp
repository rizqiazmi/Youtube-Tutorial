#include <iostream>

using namespace std;

struct Node{

    int data = 0;

    Node *berikut = NULL;
};

void cetakNode(Node *A){

    cout << "\n Data node adalah : " << A->data << " ";
}

int main()
{
    Node *A = new Node;

    cout << "\n\t Mencetak Node dengan Procedure \n";

    // Data Nodenya
    A->data = 7;
    A->berikut = NULL;

    // Cetak Nodenya
    cout << "\n Tidak menggunakan Procedure ";
    cout << "\n Data node adalah : " << A->data;

    cout << "\n\n Dengan menggunakan Procedure ";
    cetakNode(A);

    cout << endl << endl;
    return 0;
}
