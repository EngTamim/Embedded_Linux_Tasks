// Task 6
// Summation the digits of integer entered by user

#include <iostream>

int main() {
    int number, sum = 0;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    int tempNumber = number;
    while (tempNumber != 0) {
        sum += tempNumber % 10; 
        tempNumber /= 10; 
    }

    std::cout << "Sum of digits: " << sum << std::endl;

    return 0;
}
