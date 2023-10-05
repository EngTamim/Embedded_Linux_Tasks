// Task 1
// Create a function to find the maximum number of array

#include <iostream>

int findMaxInArray(const int array[], int size) {

    int max = array[0]; 

    for (int i = 1; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];  
        }
    }

    return max;
}

int main() {
    int numbers[] = {34, 99, 62, 59, 29, 80, 12, 70, 76};
    int size = sizeof(numbers) / sizeof(numbers[0]);
 
    int maximum = findMaxInArray(numbers, size);

    std::cout << "Maximum number in the array: " << maximum << std::endl;

    return 0;
}
