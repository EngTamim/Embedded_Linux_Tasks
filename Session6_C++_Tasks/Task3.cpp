// Task 3
// Draw Right Angle Triangle

#include <iostream>

int main() {
    int baseLength {};

    std::cout << "Enter the base length of the right-angle triangle: ";
    std::cin >> baseLength;

    for (int i = 1; i <= baseLength; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "#";
        }
        std::cout << std::endl;
    }

    return 0;
}
