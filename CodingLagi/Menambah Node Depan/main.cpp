#include <iostream>

using namespace std;

struct Node{
    int data = 0;

    Node *berikut = NULL;
};

Node *A = new Node;
Node *B = new Node;
Node *C = new Node;
Node *X = new Node;

int tambahNode_depan(Node *X){

    cout << "\n Inputkan data node : ";
    cin >> X->data;

    X->berikut = A;
}

int cetakNode(Node *A){

    Node *jalan = A;

    while(jalan != NULL){

        cout << jalan->data << " ";

        jalan = jalan->berikut;
    }
}

int main()
{
    Node *root = new Node;

    cout << "\n\t Program Menambah Node Depan \n";

    cout << "\n Node sebelum ditambahkan : ";

    // Data-data nodenya
    A->data = 3;
    A->berikut = B;

    B->data = 4;
    B->berikut = C;

    C->data = 6;
    C->berikut = NULL;

    root = A;
    cetakNode(root);

    cout << endl;

    root = X;
    tambahNode_depan(X);

    cout << "\n Node setelah ditambahkan : ";
    cetakNode(root);
    return 0;
}
