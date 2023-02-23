#include "upper.h"
#include "lower.h"
#include "box.h"
#include "cross.h"
#include "checkerboard3x3.h"
#include "trapezoid.h"
#include <iostream>
using namespace std;
int main()
{
    std::cout << "Printing top-right half of a square with side length 5:" << std::endl;
    printUpper(5);
    std::cout << std::endl;

    std::cout << "Printing bottom-left half of a square with side length 6:" << std::endl;
    printLower(6);
    std::cout << std::endl;

    std::cout << "Printing a box of width 8 and height 6:" << std::endl;
    box(8, 6);
    std::cout << std::endl;

    std::cout << "Printing a diagonal cross of size 7:" << std::endl;
    print_cross(7);
    std::cout << std::endl;

    std::cout << "Printing a checkerboard of 3-by-3 squares with width 10 and height 7:" << std::endl;
    checkerboard3x3(10, 7);
    std::cout << std::endl;

    std::cout << "Printing an upside-down trapezoid of width 9 and height 5:" << std::endl;
    trapezoid(9, 5);
    std::cout << std::endl;

    return 0;
}