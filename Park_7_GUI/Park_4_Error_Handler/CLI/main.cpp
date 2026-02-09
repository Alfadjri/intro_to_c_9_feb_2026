#include <iostream>
#include <string>
#include <stdexcept>

int main() {
    try {
        std::string teks = "Bukan Angka";
        int angka = std::stoi(teks); 
        std::cout << angka << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cout << "Terjadi kesalahan, input yang anda masukan bukan angka." << std::endl;
    }
    std::cout << "Program tetap berjalan ...." << std::endl;
    return 0;
}
