#ifndef __MAHASISWA
#define __MAHASISWA
#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    // Attribute
    public: // ini dapat diakses oleh siapa pun
        string namePublic;

    private: // ini hanya dapat diakses oleh class itu sendiri
        string namePrivate;

    // methods dan constructor
    public:
        // constructor selalu public
        Mahasiswa(const char* name);
        void showDisplay();

    private:
        void showDisplayPrivate();
};

#endif // __MAHASISWA
