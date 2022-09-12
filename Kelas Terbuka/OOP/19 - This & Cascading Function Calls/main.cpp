#include <iostream>
#include <string>

using namespace std;

class Player{
    private:
        string nama_depan;
        string nama_tengah;
        string nama_belakang;

    public:

        Player(){
            nama_depan = "depan"; // menggunakan teknik implisit
            this->nama_tengah = "tengah"; // teknik eksplisit dengan menggunakan pointer this dan arrow
            // Player::nama_belakang = "belakang";
            (*this).nama_belakang = "belakang"; // deference this pointer dan dot operator
        }

        // kita bisa melakukan cascade function calls dengan *this
        Player& setNamaDepan(const char* depan){
            this->nama_depan = depan;
            return *this;
        }

        Player& setNamaBelakang(const char* belakang){
            (*this).nama_belakang = belakang;
            return *this;
        }

        Player& setNamaTengah(const char* tengah){
            this->nama_tengah = tengah;
            return *this;
        }

        void display(){
            cout << "Nama: ";
            cout << " " << nama_depan;
            cout << " " << this->nama_tengah;
            cout << " " << (*this).nama_belakang << endl;
        }

};

int main(int argc, char const *argv[]){

    Player* player1 = new Player();
    player1->display();

    player1->setNamaDepan("Ucup");
    player1->setNamaBelakang("Surucup");
    player1->setNamaTengah("Dangerous");
    player1->display();

    // cascade function cals
    //player1->setNamaDepan("Otong").setNamaTengah("The Best").setNamaBelakang("Surotong");
    player1->setNamaDepan("Otong").setNamaTengah("The Best").setNamaBelakang("Surotong");
    player1->display();

    Player player2 = Player();
    player2.display();
    player2.setNamaDepan("Dangerous").setNamaTengah("Ucup").setNamaBelakang("Surucup");
    player2.display();


    return 0;
}
