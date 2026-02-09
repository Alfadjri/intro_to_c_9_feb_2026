#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
protected:
    std::string name;

public:
    Animal(const std::string& nama_animal);
    virtual ~Animal();

    virtual void speak() const = 0;
    std::string getName() const;
    virtual void showType() const;
};

#endif
