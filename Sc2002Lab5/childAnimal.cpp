//
// Created by Xu Shuwei on 8/11/24.
//

#include "childAnimal.h"

Dog::Dog(const std::string &name, COLOR color, const std::string &owner) : Mammal(name, color), _owner(owner) {
    std::cout << "Constructing Dog object " << name << " with owner " << owner << std::endl;
}

Dog::~Dog() {
    std::cout << "Destructing Dog object " << _name << std::endl;
}

void Dog::speak() const {
    std::cout << "Woof!" << std::endl;
}

void Dog::move() const {
    std::cout << "Dog runs" << std::endl;
}

void Dog::eat() const{
    std::cout << "Dog eats meat" << std::endl;
}

Cat::Cat(const std::string &name, COLOR color) : Mammal(name, color) {
    std::cout << "Constructing Cat object " << name << std::endl;
}

Cat::~Cat() {
    std::cout << "Destructing Cat object " << _name << std::endl;
}

void Cat::speak() const {
    std::cout << "Meow!" << std::endl;
}

void Cat::move() const {
    std::cout << "Cat moves stealthily" << std::endl;
}

void Cat::eat() const{
    std::cout << "Cat eats fish" << std::endl;
}

Lion::Lion(const std::string &name, COLOR color) : Mammal(name, color) {
    std::cout << "Constructing Lion object " << name << std::endl;
}

Lion::~Lion() {
    std::cout << "Destructing Lion object " << _name << std::endl;
}

void Lion::speak() const {
    std::cout << "Roar!" << std::endl;
}

void Lion::move() const {
    std::cout << "Lion strides majestically" << std::endl;
}

void Lion::eat() const{
    std::cout << "Lion eats deer" << std::endl;
}