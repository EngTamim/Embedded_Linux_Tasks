// Task 7
// Sort with Lambda: Use lambda function to sort an array of integers in ascending and descending order

#include <iostream>
#include <algorithm>

int main() {
    int numbers[] = {58, 26, 9, 14, 52, 6, 31, 14};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    std::sort(numbers, numbers + size, [](int a, int b) {
        return a < b;
    });

    std::cout << "Sorted in ascending order: ";
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    std::sort(numbers, numbers + size, [](int a, int b) {
        return a > b;
    });

    std::cout << "Sorted in descending order: ";
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

