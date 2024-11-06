#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int v) : value(v) {
        cout<<value<<endl;
    }

    MyClass(const MyClass& other) {  // Copy constructor
        value = other.value;
        cout << "Copy constructor called, value = " << value << endl;
    }
};

int main() {
    MyClass obj1(10);         // Parameterized constructor
    MyClass obj2 = obj1;      // Copy constructor
    return 0;
}