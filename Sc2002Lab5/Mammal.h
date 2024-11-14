//
// Created by Xu Shuwei on 8/11/24.
//

#ifndef MAMMAL_H
#define MAMMAL_H

#include "animal.h"

class Mammal : public Animal {
public:
    Mammal(std::string name, COLOR color);
    ~Mammal();

    void move() const override;
    void eat() const override;
};

#endif // MAMMAL_H

