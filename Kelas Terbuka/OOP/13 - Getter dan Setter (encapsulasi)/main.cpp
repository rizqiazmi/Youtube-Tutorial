#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

int main(int argc, char const *argv[]){

    Player player1 = Player("Naruto"); // ini adalah object di stack
    player1.display();

    // implementasi dari getter
    cout << player1.getName() << endl; //read
    //palyer1.name = "Luna"; // tidak bisa write

    // kegiatan bertarung
    cout << "bertarung" << endl;
    player1.addExperience(25); // setter
    player1.display();
    player1.addExperience(50);
    player1.display();
    player1.addExperience(10);
    player1.display();
    player1.addExperience(25);

    // hasilnya

    // bertarung lagi
    player1.display();
    player1.addExperience(25); // setter
    player1.display();
    player1.addExperience(50);
    player1.display();
    player1.addExperience(10);
    player1.display();
    player1.addExperience(25);
    player1.display();
    return 0;
}
