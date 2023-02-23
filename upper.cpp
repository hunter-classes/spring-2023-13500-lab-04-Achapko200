/*
spring 2023 -  Lab 4E
Achapko200
description: decreasing the number of stars
  */
#include "upper.h"
#include <iostream>

void printUpper(int sideLength)
{
  for (int row = 0; row < sideLength; row++)
  {
    for (int col = 0; col < sideLength; col++)
    {
      if (col >= row)
      {
        std::cout << "* ";
      }
      else
      {
        std::cout << "  ";
      }
    }
    std::cout << std::endl;
  }
}
