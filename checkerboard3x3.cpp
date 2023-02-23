/*
spring 2023 -  Lab 4G
Achapko200
description: checkerboard
  */
#include "checkerboard3x3.h"
#include <iostream>

void checkerboard3x3(int width, int height) {
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            if ((row / 3) % 2 == 0) {
                if ((col / 3) % 2 == 0) {
                    std::cout << "*";
                } else {
                    std::cout << " ";
                }
            } else {
                if ((col / 3) % 2 == 0) {
                    std::cout << " ";
                } else {
                    std::cout << "*";
                }
            }
        }
        std::cout << std::endl;
    }
}
