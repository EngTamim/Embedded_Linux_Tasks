// Task 7
// Change from decimal to binary and vice versa (use bitset)

#include <iostream>
#include <bitset>

int main() {
    int decimalNumber {};
    int decimalResult {};
    std::string binaryNumber {};

    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;
    std::bitset<32> binary(decimalNumber);
    binaryNumber = binary.to_string();

    std::cout << "Binary representation: " << binaryNumber << std::endl;

    std::string binaryInput;
    std::cout << "Enter a binary number: ";
    std::cin >> binaryInput;

    std::bitset<32> binaryBits(binaryInput); 
    decimalResult = binaryBits.to_ulong();

    std::cout << "Decimal representation: " << decimalResult << std::endl;

    return 0;
}
