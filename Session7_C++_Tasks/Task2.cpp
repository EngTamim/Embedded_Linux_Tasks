// Task 2
// Create a function to search to number in the array which number is taken from user

#include <iostream>

bool findNumberInArray(const int array[], int size, int Number) {

    for (int i = 0; i < size; ++i) {
        if (array[i] == Number) {
            return true;
        }
    }

    return false;
}

int main() {
    int numbers[] = {34, 99, 62, 59, 29, 80, 12, 70, 76};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int targetNumber {};

    std::cout << "Enter the number you want to find: ";
    std::cin  >> targetNumber;

    bool result = findNumberInArray(numbers, size, targetNumber);

    if (result) {
        std::cout << "The number you entered is in the array" << std::endl;
    }
    else {
        std::cout << "The number you entered is not in the array" << std::endl;
    }

    return 0;
}
