/*
spring 2023 -  Lab 4G
Achapko200
description: checkerboard
  */


#include "checkerboard3x3.h"
#include <iostream>
#include <string>

void checkerboard3x3(int width, int height)
{
	int squaresPerRow = width / 3;
	int squaresPerColumn = height / 3;

	for (int row = 0; row < squaresPerColumn; row++)
	{
		for (int col = 0; col < squaresPerRow; col++)
		{
			std::cout << "***";
		}
		std::cout << std::endl;

		for (int i = 0; i < 2; i++)
		{
			for (int col = 0; col < squaresPerRow; col++)
			{
				std::cout << "* *";
			}
			std::cout << std::endl;
		}
	}
}
