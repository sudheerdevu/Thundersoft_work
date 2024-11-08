#include <iostream>
#include <cstring>

class CopyExample {
private:
    char *name;
    int age;

public:
    // Constructor
    CopyExample(const char *name, int age) {
        this->age = age;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    // Shallow Copy Constructor
    CopyExample(const CopyExample &other) {
        this->age = other.age;
        // Shallow copy: Copies the pointer, not the actual data
        this->name = other.name;
    }

    // Deep Copy Constructor
    CopyExample(const CopyExample &other, bool deepCopy) {
        if (deepCopy) {
            this->age = other.age;
            // Deep copy: Allocates new memory and copies the data
            this->name = new char[strlen(other.name) + 1];
            strcpy(this->name, other.name);
        } else {
            *this = other; // Call shallow copy if deepCopy is false
        }
    }

    // Destructor
    ~CopyExample() {
        delete[] name;
    }

    // Display Function
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    CopyExample original("John Doe", 30);

    // Shallow Copy
    CopyExample shallowCopy = original; // Calls shallow copy constructor
    std::cout << "Shallow Copy:" << std::endl;
    shallowCopy.display();

    // Deep Copy
    CopyExample deepCopy(original, true); // Calls deep copy constructor
    std::cout << "Deep Copy:" << std::endl;
    deepCopy.display();

    // Modifying the original's name
    original.display();
    std::cout << "Original after modification:" << std::endl;
    original.display();

    return 0;
}