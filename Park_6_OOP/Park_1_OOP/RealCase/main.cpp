#include <iostream>
#include "./include/Animal.hpp" 
#include "./include/Dog.hpp"
#include "./include/Kucing.hpp"

int main() {
    
    Animal* kandang[] = {
        new Dog("Spike"),
        new Kucing("Tom")
    };
    int jumlah_hewan = sizeof(kandang) / sizeof(kandang[0]);

    
    std::cout << "--- Menggunakan semua hewan di kandang ---" << std::endl;
    for (int i = 0; i < jumlah_hewan; i++) {
        Animal* hewan = kandang[i];
        hewan->showType();
        hewan->speak();
        std::cout << "--------------------" << std::endl;
    }

   
    std::cout << "\n--- Membersihkan memori ---" << std::endl;
    for (int i = 0; i < jumlah_hewan; ++i) {
        delete kandang[i];
    }

    // how to compile that
    // g++ main.cpp src/*.cpp -std=c++17 -Wall -Wextra -o app
    return 0;
}