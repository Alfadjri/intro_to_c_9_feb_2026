#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file("./database_lokal.txt", ios::out | ios::in | ios::trunc);

    if(!file.is_open()){
        cout << "File tidak bisa dibuat atau gagal dalam build" << endl;
        return 0;
    }
    // Tulis ke file
    file << "Nama : Alfadjri" << endl;

    // Kembalikan pointer ke awal file
    file.seekg(0, ios::beg);

    string line;
    cout << "Isi dari file yang kita buat:" << endl;

    while(getline(file, line)){
        cout << line << endl;
    }

    file.close();
    return 0;
}
