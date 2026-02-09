#include<iostream>


int main(){
    // tipe_data namaVariable
    char nama_lengkap[255];
    std::cout << "Masukan nama Anda : ";
    std::cin.getline(nama_lengkap,255);
    
    // print
    std::cout << "Hello Selamat datang , " << nama_lengkap << " di program sederhanan pertama anda." << std::endl;
    return 0;
}