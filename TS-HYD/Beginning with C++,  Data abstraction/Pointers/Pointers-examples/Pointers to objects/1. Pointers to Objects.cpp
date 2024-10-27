#include <iostream>
using namespace std;

class MyClass {
public:
    void display() {
        cout << "Hello from MyClass!" << endl;
    }
};

int main() {
    MyClass* objPtr = new MyClass(); // Pointer to object
    objPtr->display(); // Accessing member function using pointer

    delete objPtr; // Freeing allocated memory
    return 0;
}