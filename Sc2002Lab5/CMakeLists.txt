cmake_minimum_required(VERSION 3.29)
project(untitled2)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_COMPILER "/usr/bin/clang++")

add_executable(Sc2002Lab5 main.cpp
        Animal.h
        Animal.cpp
        Animal.h
        Mammal.cpp
        Mammal.h
        childAnimal.cpp
        childAnimal.h
)
