/*
spring 2023 -  Lab 4C
Achapko200
description: cross
  */

#include <iostream>
#include "cross.h"

void print_cross(int size)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      if (i == j || i + j == size - 1)
      {
        std::cout << "*";
      }
      else
      {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }
}