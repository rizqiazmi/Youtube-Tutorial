#ifndef __PLAYER
#define __PLAYER

#include <string>

using namespace std;

// Deklarasi class

class Player{
    public:
        string name;

        // Constructor
        Player(const char* name); // dalam bentuk prototype
        void display();
        string getName();
        void setName(const char*);
};

#endif // __PLAYER
