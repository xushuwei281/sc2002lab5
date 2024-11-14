//
// Created by Xu Shuwei on 8/11/24.
//
#ifndef CHILD_ANIMAL_H
#define CHILD_ANIMAL_H

#include "mammal.h"

class Dog : public Mammal {
public:
    Dog(const std::string &name, COLOR color, const std::string &owner);
    ~Dog() override;

    void speak() const override;
    void move() const override;

    void eat();

    void eat() const override;


private:
    std::string _owner;
};

class Cat : public Mammal {
public:
    Cat(const std::string &name, COLOR color);
    ~Cat() override;

    void speak() const override;
    void move() const override;

    void eat();

    void eat() const override;

};

class Lion : public Mammal {
public:
    Lion(const std::string &name, COLOR color);
    ~Lion() override;

    void speak() const override;
    void move() const override;

    void eat();

    void eat() const override;

};

#endif // CHILD_ANIMAL_H

