#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

enum COLOR { Green, Blue, White, Black, Brown };

class Animal {
public:
    Animal();
    Animal(std::string name, COLOR color);
    virtual ~Animal();

    virtual void speak() const;
    virtual void move() const = 0;

    virtual void eat() const;

protected:
    std::string _name;
    COLOR _color;
};

#endif // ANIMAL_H
