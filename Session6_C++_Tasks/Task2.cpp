// Task 2
// Maximum number between three values

#include <iostream>

int main() {
    int x {};
    int y {};
    int z {};
    int max {0};

    std::cout << "Enter Three Numbers: \n";
    std::cout << "X= ";
    std::cin  >> x;
    std::cout << "Y= ";
    std::cin  >> y;
    std::cout << "Z= ";
    std::cin  >> z;
     
    if (x > max) max = x;
    if (y > max) max = y;
    if (z > max) max = z;

    std::cout << "The Maximum Number is: " << max << std::endl;

    return 0;
}