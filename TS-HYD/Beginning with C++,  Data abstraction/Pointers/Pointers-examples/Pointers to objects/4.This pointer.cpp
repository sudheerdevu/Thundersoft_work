#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int val) : value(val) {}

    void display() {
        cout << "Value: " << this->value << endl; // Using this pointer
    }

    void setValue(int value) {
        this->value = value; // Using this pointer to distinguish between parameter and member
    }
};

int main() {
    MyClass obj(10);
    obj.display(); // Output: Value: 10

    obj.setValue(20);
    obj.display(); // Output: Value: 20

    return 0;
}