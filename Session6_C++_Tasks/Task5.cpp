// Task 5
// Multiplication Table of Number

#include <iostream>

int main() {
    int number {};

    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Multiplication Table of " << number << ":\n";
    for (int i = 1; i <= 10; ++i) {
        std::cout << number << " * " << i << " = " << number * i << std::endl;
    }

    return 0;
}
