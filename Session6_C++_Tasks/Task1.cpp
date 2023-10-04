// Task1 
// Create a table for ASCII Code  

#include <iostream>

int main() {
    std::cout << "ASCII Table: \n";
    std::cout << "+-------+-------+ \n";
    std::cout << "| Char  | ASCII | \n";
    std::cout << "+-------+-------+ \n";

    for (int i = 32; i<= 126; ++i) {
        std::cout << "|   " << static_cast<char>(i) << "   |  " << i << "   |" << std::endl;
    }

    return 0;
}