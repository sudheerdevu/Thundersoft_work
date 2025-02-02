#include <iostream>
#include <cstring>

class String {
private:
    char* data;
    size_t length;

public:
    // Default Constructor
    String() : data(nullptr), length(0) {}

    // Parameterized Constructor
    String(const char* str) {
        if (str) {
            length = std::strlen(str);
            data = new char[length + 1];
            std::strcpy(data, str);
        } else {
            length = 0;
            data = nullptr;
        }
    }

    // Copy Constructor
    String(const String& other) {
        length = other.length;
        data = new char[length + 1];
        std::strcpy(data, other.data);
    }

    // Move Constructor
    String(String&& other) noexcept : data(nullptr), length(0) {
        data = other.data;
        length = other.length;
        other.data = nullptr;
        other.length = 0;
    }

    // Copy Assignment Operator
    String& operator=(const String& other) {
        if (this != &other) {
            delete[] data;
            length = other.length;
            data = new char[length + 1];
            std::strcpy(data, other.data);
        }
        return *this;
    }

    // Move Assignment Operator
    String& operator=(String&& other) noexcept {
        if (this != &other) {
            delete[] data;
            data = other.data;
            length = other.length;
            other.data = nullptr;
            other.length = 0;
        }
        return *this;
    }

    // Concatenation Operator
    String operator+(const String& other) const {
        size_t new_length = length + other.length;
        char* new_data = new char[new_length + 1];
        std::strcpy(new_data, data);
        std::strcat(new_data, other.data);
        String result(new_data);
        delete[] new_data;
        return result;
    }

    // Equality Operator
    bool operator==(const String& other) const {
        return std::strcmp(data, other.data) == 0;
    }

    // Destructor
    ~String() {
        delete[] data;
    }

    // Print Function
    void print() const {
        if (data)
            std::cout << data << std::endl;
    }
};

int main() {
    // Default Constructor
    String s1;
    std::cout << "Default Constructor: ";
    s1.print();

    // Parameterized Constructor
    String s2("Hello");
    std::cout << "Parameterized Constructor: ";
    s2.print();

    // Copy Constructor
    String s3(s2);
    std::cout << "Copy Constructor: ";
    s3.print();

    // Move Constructor
    String s4(std::move(s3));
    std::cout << "Move Constructor (s3 moved to s4): ";
    s4.print();

    // Copy Assignment Operator
    String s5;
    s5 = s2;
    std::cout << "Copy Assignment Operator: ";
    s5.print();

    // Move Assignment Operator
    String s6;
    s6 = std::move(s5);
    std::cout << "Move Assignment Operator (s5 moved to s6): ";
    s6.print();

    // Concatenation Operator
    String s7 = s2 + String(" World");
    std::cout << "Concatenation Operator: ";
    s7.print();

    // Equality Operator
    String s8("Hello");
    std::cout << "Equality Operator: ";
    if (s2 == s8) {
        std::cout << "s2 and s8 are equal" << std::endl;
    } else {
        std::cout << "s2 and s8 are not equal" << std::endl;
    }

    return 0;
}
