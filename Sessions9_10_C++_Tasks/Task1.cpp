// Task 1
// Create calss behave like string totally

#include <iostream>
#include <cstring>

class String {
private:
    char* data;

public:
    // Constructors
    String() : data(nullptr) {}
    String(const char* str) : data(new char[strlen(str) + 1]) {
        strcpy(data, str);
    }
    String(const String& other) : data(new char[strlen(other.data) + 1]) {
        strcpy(data, other.data);
    }

    // Destructor
    ~String() {
        delete[] data;
    }

    // Assignment operator
    String& operator=(const String& other) {
        if (this != &other) {
            delete[] data;
            data = new char[strlen(other.data) + 1];
            strcpy(data, other.data);
        }
        return *this;
    }

    // Concatenation operator
    String operator+(const String& other) const {
        char* temp = new char[strlen(data) + strlen(other.data) + 1];
        strcpy(temp, data);
        strcat(temp, other.data);
        String result(temp);
        delete[] temp;
        return result;
    }

    // Equality operator
    bool operator==(const String& other) const {
        return strcmp(data, other.data) == 0;
    }

    // Accessor function
    const char* c_str() const {
        return data;
    }
};

int main() {
    String str1("Hi!...");
    String str2("Hi!...");

    String concatenated = str1 + str2;
    std::cout << "Concatenated string: " << concatenated.c_str() << std::endl;

    if (str1 == str2) {
        std::cout << "str1 is equal to str2" << std::endl;
    } else {
        std::cout << "str1 is not equal to str2" << std::endl;
    }

    return 0;
}
