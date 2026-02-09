#ifndef KUCING_HPP
#define KUCING_HPP

#include "Animal.hpp"
#include <string>

class Kucing : public Animal {
    public:
        Kucing(const std::string& nama_kucing);
        ~Kucing() override;

        void speak() const override;
        void showType() const override;
};

#endif
