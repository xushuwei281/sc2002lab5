//
// Created by Xu Shuwei on 8/11/24.
//

#include "mammal.h"

Mammal::Mammal(std::string name, COLOR color) : Animal(name, color) {
    std::cout << "Constructing Mammal object " << _name << std::endl;
}

Mammal::~Mammal() {
    std::cout << "Destructing Mammal object " << _name << std::endl;
}

void Mammal::eat() const {
    std::cout << "Mammal eats" << std::endl;
}

void Mammal::move() const {
    std::cout << "Mammal moves" << std::endl;
}
