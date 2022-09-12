#include <iostream>
using namespace std;

// reporter : dengan feedback
int kuadrat(int x){ // fungsi kembalian
    int y;
    y = x * x;
    return y;
}

// worker : tanpa feedback
void tampilkan(int input){
    cout << "menampilkan dengan void\n";
    cout << input << endl;
}

int main(){

    int input, hasil, a, b, hasil2;
    cout << "nilai kuadrat dari: ";
    cin >> input;

    hasil = kuadrat(input);
    tampilkan(hasil);

//  cin.get();
    return 0;
}
