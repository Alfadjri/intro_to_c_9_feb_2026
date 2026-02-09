#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog(const std::string& nama_dog);
    ~Dog() override;

    void speak() const override;
    void showType() const override;
};

#endif
