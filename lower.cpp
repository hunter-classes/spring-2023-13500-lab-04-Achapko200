/*
spring 2023 -  Lab 4D
Achapko200
description: decreasing the number of stars
  */

#include <iostream>
#include "lower.h"

void printLower(int sideLength)
{
  for (int i = 0; i < sideLength; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}
