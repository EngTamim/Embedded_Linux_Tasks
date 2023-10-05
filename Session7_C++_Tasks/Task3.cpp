// Task 3
// Create a function to delete number from array which number is taken from user

#include <iostream>

void deleteNumber(int array[], int& size, int numberToDelete) {
    int foundIndex = -1;

    for (int i = 0; i < size; ++i) {
        if (array[i] == numberToDelete) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        for (int i = foundIndex; i < size - 1; ++i) {
            array[i] = array[i + 1];
        }

        --size;
        std::cout << "Number deleted successfully." << std::endl;
    } else {
        std::cout << "Number not found in the array." << std::endl;
    }
}

int main() {
    int numbers[] = {3, 9, 4, 5, 1, 8, 2, 7, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "Enter a number to delete from the array: ";
    int numberToDelete;
    std::cin >> numberToDelete;

    deleteNumber(numbers, size, numberToDelete);
    
    std::cout << "Array after deletion: ";
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
