/*
spring 2023 -  Lab 2B
Achapko200
description: box
*/

#include "box.h"

void box(unsigned int width, unsigned int height) {
    for (unsigned int i = 0; i < width; i++) {
        std::cout << "*";
    }
    std::cout << std::endl;

    for (unsigned int i = 0; i < height - 2; i++) {
        std::cout << "*" << std::setw(width - 1) << "*" << std::endl;
    }

    for (unsigned int i = 0; i < width; i++) {
        std::cout << "*";
    }
    std::cout << std::endl;
}