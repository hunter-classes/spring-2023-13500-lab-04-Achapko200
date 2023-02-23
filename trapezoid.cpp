#include "trapezoid.h"
#include <iostream>
#include <string>

void trapezoid(int width, int height) {
    if (width % 2 == 0) {
        std::cout << "Impossible shape!\n";
        return;
    }
    if (height > width / 2 + 1) {
        std::cout << "Impossible shape!\n";
        return;
    }

    int num_spaces = 0;
    for (int row = 0; row < height; row++) {
        for (int space = 0; space < num_spaces; space++) {
            std::cout << " ";
        }
        for (int star = 0; star < width - 2 * num_spaces; star++) {
            std::cout << "*";
        }
        std::cout << "\n";
        num_spaces++;
    }
}
