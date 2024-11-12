#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Constructor called" << endl;
    }

    ~MyClass() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    MyClass obj;  // Constructor called
    return 0;     // Destructor called when obj goes out of scope
}