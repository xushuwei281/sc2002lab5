

#include "animal.h"

Animal::Animal() : _name("unknown"), _color(Green) {
    std::cout << "Constructing Animal object " << _name << std::endl;
}

Animal::Animal(std::string name, COLOR color) : _name(name), _color(color) {
    std::cout << "Constructing Animal object " << _name << " with color " << color << std::endl;
}

Animal::~Animal() {
    std::cout << "Destructing Animal object " << _name << std::endl;
}

void Animal::speak() const {
    std::cout << "Animal speaks" << std::endl;
}

void Animal::eat() const {
    std::cout << "Animal eats" << std::endl;
}