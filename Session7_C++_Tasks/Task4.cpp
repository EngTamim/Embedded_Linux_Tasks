// Task 4
// Create a function to merge two arrays together

#include <iostream>

void mergeArrays(const int arr1[], int size1, const int arr2[], int size2, int mergedArray[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArray[k++] = arr1[i++];
        } else {
            mergedArray[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        mergedArray[k++] = arr1[i++];
    }

    while (j < size2) {
        mergedArray[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {19, 23, 56, 88, 41};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {34, 9, 64, 72, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedArray[size1 + size2];

    mergeArrays(arr1, size1, arr2, size2, mergedArray);

    std::cout << "Merged Array: ";
    for (int i = 0; i < size1 + size2; ++i) {
        std::cout << mergedArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
