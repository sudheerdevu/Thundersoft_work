#include <iostream>
using namespace std;

class DeepCopyClass {
    int *data;

public:
    // Constructor to allocate memory
    DeepCopyClass(int value) {
        data = new int(value);
    }

    // Copy constructor for deep copy
    DeepCopyClass(const DeepCopyClass &source) {
        data = new int(*source.data);  // Allocate new memory and copy the value
    }

    // Overloading assignment operator for deep copy
    DeepCopyClass& operator=(const DeepCopyClass &source) {
        if (this != &source) {
            delete data;  // Free existing memory
            data = new int(*source.data);  // Allocate new memory and copy the value
        }
        return *this;
    }

    void display() const {
        cout << "Value: " << *data << endl;
    }

    // Destructor to free memory
    ~DeepCopyClass() {
        delete data;
    }
};

int main() {
    DeepCopyClass obj1(10);
    DeepCopyClass obj2 = obj1;  // Calls the copy constructor

    cout << "Object 1: ";
    obj1.display();

    cout << "Object 2 (copied): ";
    obj2.display();

    return 0;
}