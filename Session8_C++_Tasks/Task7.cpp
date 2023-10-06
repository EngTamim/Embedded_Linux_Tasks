// Task 7
// Calculate accumulate of array 

#include <iostream>

int main(){
    int myArray[] = {12, 52, 36, 98, 62, 42, 30, 47};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);
    int arrayAccumulate {0};
    for (int i = 0; i < arraySize; ++i){
        arrayAccumulate = arrayAccumulate + myArray[i];
    }

    std::cout << "The Accumulate of array is: " << arrayAccumulate << std::endl;

    return 0;
}