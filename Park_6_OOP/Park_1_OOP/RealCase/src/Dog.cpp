#include "../include/Dog.hpp"
#include <iostream>

Dog::Dog(const std::string& name) : Animal(name) {}

Dog::~Dog() {
    std::cout << "Dog destructor: " << getName() << std::endl;
}

void Dog::speak() const {
    std::cout << "Nama hewan " << getName()
              << " | Suara: Woof !!!" << std::endl;
}

void Dog::showType() const {
    std::cout << getName() << " is a Dog." << std::endl;
}
