// Task 3
// write C++ code to check if there is any value in array is even.

# include <iostream>

int main(){
    int myArray[] = {73,25,29,11,61,31,49};
    bool itHasEvenElement = {false};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);
    for (int i = 0; i < arraySize; ++i){
        if (myArray[i] % 2 != 0){
            itHasEvenElement = true;
            break;
        }
    }

    if (itHasEvenElement){
        std::cout << "The array has at least one even element among its elements..." << std::endl;
    }
    else{
        std::cout << "The array hasn't any even element among its elements..." << std::endl;
    }
    
    return 0;
}