/*
spring 2023 -  Lab 4A
Achapko200
description: box
*/

#include "box.h"
#include <iostream>

void box(int width, int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
