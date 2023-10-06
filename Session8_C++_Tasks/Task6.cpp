// Task 6
// Fill array from 10 to 10000 sequentially {10, 11, 12, 13, .....

#include <iostream>

int main() {
    const int size = 9999; 
    int array[size];
    
    for (int i = 0; i < size; ++i) {
        array[i] = i + 10;
    }
    
    std::cout << "Done..." << std::endl;
    
    return 0;
}
