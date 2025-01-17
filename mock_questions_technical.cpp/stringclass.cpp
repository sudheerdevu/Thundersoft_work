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

    MyString(const MyString& other) { // Copy constructor
        if (other.data) {
            data = new char[length + 1];
            strcpy(data, other.data);
        } else {
            data = nullptr;
            length=0;
        }
    }

   
    MyString& operator=(const MyString& other) { // overloaded assignment operator
        if (this == &other) {
            return *this;
        }
        if(this->data != nullptr){
            delete[] data;
        }
        
        if (other.data) {
            length = other.length;
            data = new char[length + 1];
            strcpy(data, other.data);
        } else {
            data = nullptr;
        }
        return *this;
    }


    ~MyString() { // Destructor
        if(this->data!=nullptr){
        delete[] data;
        }
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
        if(newData!=nullptr){
            delete[] newData;
        }
         
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
    
    return 0;
}