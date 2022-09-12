#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const size_t arraySize = 10;

void printArray(array <int, arraySize> &angka){
    cout << "Array: ";
    for(int &a : angka){
        cout << a << " ";
    }
    cout << endl;
}

void printArray(array <char, arraySize> &angka){
    cout << "Array: ";
    for(char &a : angka){
        cout << a << " ";
    }
    cout << endl;
}

int main(){
    array <int, arraySize> angka = {9,4,6,7,8,1,3,2,5,0};
    array <char, arraySize> huruf = {'c','h','j','e','r','t','y','v','b','a'};

    printArray(angka);
    printArray(huruf);
    cout << endl;

    // mengurutkan angka
    sort(angka.begin(), angka.end());
    printArray(angka);

    // mengurutkan huruf
    sort(huruf.begin(), huruf.end());
    printArray(huruf);

//  cin.get();
    return 0;
}
