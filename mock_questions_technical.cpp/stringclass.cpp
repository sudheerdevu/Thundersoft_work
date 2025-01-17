#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char* data;
    size_t length;

public:
    MyString() : data(nullptr), length(0) {} // Default 

    MyString(const char* str) { // Parameterized 
        if (str) {
            length = strlen(str);
            data = new char[length + 1];
            strcpy(data, str);
        } else {
            data = nullptr;
            length = 0;
        }
    }

    MyString(const MyString& other) { // Copy 
        if (other.data) {
            data = new char[length + 1];
            strcpy(data, other.data);
        } else {
            data = nullptr;
        }
    }

    MyString(MyString&& other) noexcept // Move 
        : data(other.data), length(other.length) {
        other.data = nullptr;
        other.length = 0;
    }

    MyString& operator=(const MyString& other) { // Copy assignment 
        if (this == &other) {
            return *this;
        }
        delete[] data;

        length = other.length;
        if (other.data) {
            data = new char[length + 1];
            strcpy(data, other.data);
        } else {
            data = nullptr;
        }
        return *this;
    }

    MyString& operator=(MyString&& other) noexcept { // Move assignment 
        if (this == &other) {
            return *this;
        }
        delete[] data;

        data = other.data;
        length = other.length;

        other.data = nullptr;
        other.length = 0;
        return *this;
    }

    ~MyString() { // Destructor
        delete[] data;
    }

    const char* get() const {
        return data ? data : "";
    }

    size_t size() const {
        return length;
    }

    MyString operator+(const MyString& other) const { // Concatenation 
        size_t newLength = length + other.length;
        char* newData = new char[newLength + 1];
        strcpy(newData, data ? data : "");
        strcat(newData, other.data ? other.data : "");

        MyString result(newData);
        delete[] newData; 
        return result;
    }

    friend std::ostream& operator<<(std::ostream& os, const MyString& str) {
        os << str.get();
        return os;
    }
};

int main() {
    MyString s1("hello");
    MyString s2("world");
    MyString s3 = s1 + s2; 

    std::cout << "s1 is: " << s1 << std::endl;
    std::cout << "s2 is: " << s2 << std::endl;
    std::cout << "s3 is: " << s3 << std::endl;

    s3 = s1; // Copy assignment
    std::cout << "After assignment, s3: " << s3 << std::endl;

    MyString s4 = std::move(s2); // Move constructor
    std::cout << "After move, s4: " << s4 << std::endl;
    std::cout << "s2 after move: " << s2 << std::endl; // s2 should now be empty

    return 0;
}