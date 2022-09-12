#ifndef __PLAYER
#define __PLAYER
#include <string>
using namespace std;
class Player{
    private:
        string name;
        double attackPower;
        int level;
        int exp;

    public:
        Player(const char* name);

        // getter, ini artinya kita akan membuat attribute menjadi read only
        string getName();

        // setter, ini untuk write data ke class
        void addExperience(int);

        void display();
};
#endif // __PLAYER
