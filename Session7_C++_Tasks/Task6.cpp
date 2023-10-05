// Task 6
// Simple Lambda: Write a lambda function to calculate the square of a given number

#include <iostream>

int main() {
    // Define a lambda function to calculate the square of a number
    auto square = [](int number) {
        return number * number;
    };

    // Test the lambda function
    int number {};

    std::cout << "Enter the Number: " ;
    std::cin  >> number;
    std::cout << "Square of " << number << " is: " << square(number) << std::endl;

    return 0;
}
