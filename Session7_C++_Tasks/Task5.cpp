// Task 5
// function to find the even and odd numbers in the array

#include <iostream>
#include <vector>

void separateEvenOdd(const int array[], int size, std::vector<int>& evenNumbers, std::vector<int>& oddNumbers) {
    for (int i = 0; i < size; ++i) {
        if (array[i] % 2 == 0) {
            evenNumbers.push_back(array[i]); 
        } else {
            oddNumbers.push_back(array[i]); 
        }
    }
}

int main() {
    int numbers[] = {19, 45, 67, 24, 98, 21, 70, 13, 96};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    std::vector<int> evenNumbers;
    std::vector<int> oddNumbers;

    separateEvenOdd(numbers, size, evenNumbers, oddNumbers);

    std::cout << "Even Numbers: ";
    for (int num : evenNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Odd Numbers: ";
    for (int num : oddNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
