#include "../include/Kucing.hpp"
#include <iostream>

Kucing::Kucing(const std::string& name) : Animal(name) {}

Kucing::~Kucing() {
    std::cout << "Kucing destructor: " << getName() << std::endl;
}

void Kucing::speak() const {
    std::cout << "Nama hewan " << getName()
              << " | Suara: Meow !!!" << std::endl;
}

void Kucing::showType() const {
    std::cout << getName() << " is a Kucing." << std::endl;
}
