#include<iostream>
using namespace std;

// compile
// g++ -std=c++11 namFile.cpp -o namafile.o
// -std=c++11 artinya gunakan c++ version 11 ke atas


class Animal{
    private :  // ini di sebut encapsulation
        string testing;  // ini di sebut encapsulation
    public :
        Animal(string nama_hewan){
            this->testing = nama_hewan;
        }
        // teknik seter and geter
        // cara memanggil atau merubah nilai
        string getNama(){ // ini encapsulation
            return this->testing + " testing";
        }
        void setNama(string nama_hewan){ // ini encapsulation
            this->testing = nama_hewan;
        }
};

class Kucing : public Animal{
    public:
        Kucing(string nama_hewan) : Animal(nama_hewan){}
        string getSuara(){
            return "Miaw";
        }
};

int main(){
    Kucing kucing("Kucing Oren");
    cout << "Nama : " << kucing.getNama() << endl;
    cout << "Suara : " << kucing.getSuara() << endl;
}