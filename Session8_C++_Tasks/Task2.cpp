// Task 2
// write C++ code to check if all the elments in array is even.

# include <iostream>

int main(){
    int myArray[] = {46,86,2,10,6,99,62,12,22,76};
    bool itIsEven = {true};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);
    for (int i = 0; i < arraySize; ++i){
        if (myArray[i] % 2 != 0){
            itIsEven = false;
            break;
        }
    }

    if (itIsEven){
        std::cout << "The elements in the array are even..." << std::endl;
    }
    else{
        std::cout << "There is at least one item in the array that is uneven..." << std::endl;
    }
    
    return 0;
}