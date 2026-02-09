#include "../include/Animal.hpp"
#include <iostream>

Animal::Animal(const std::string& name) : name(name) {}

Animal::~Animal() {
    std::cout << "Animal destructor: " << name << std::endl;
}

std::string Animal::getName() const {
    return name;
}

void Animal::showType() const {
    std::cout << name << " is a general animal." << std::endl;
}
