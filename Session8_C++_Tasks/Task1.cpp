// Task 1
// write C++ code to Check if the character is digit

#include <iostream>

int main(){

    char userChar {};

    std::cout << "Enter One Character: ";
    std::cin  >> userChar;

    if (userChar >= '0' && userChar <= '9'){
        std::cout << "The character is Digit..." << std::endl;
    }
    else{
        std::cout << "The character is not Digit..." << std::endl;
    }
    return 0;

}