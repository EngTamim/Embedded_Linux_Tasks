// Task 4
// Decide the letter is vowel or not

#include <iostream>

int main() {
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char letter;
    bool isVowel = false;

    std::cout << "Enter a letter: ";
    std::cin >> letter;

    for (int i = 0; i < 10; ++i) {
        if (letter == vowels[i]) {
            isVowel = true;
            break;
        }
    }

    if (isVowel) {
        std::cout << "The entered letter is a vowel." << std::endl;
    } else {
        std::cout << "The entered letter is not a vowel." << std::endl;
    }

    return 0;
}
