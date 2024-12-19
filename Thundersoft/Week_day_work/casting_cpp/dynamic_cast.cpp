
#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {} // Virtual destructor for polymorphism
};

class Derived : public Base {
public:
    void show() { cout << "Derived class object" << endl; }
};

int main() {
    Base* basePtr = new Derived; // Upcasting
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr); // Safe Downcasting

    if (derivedPtr) {
        derivedPtr->show();
    } else {
        cout << "Downcasting failed" << endl;
    }

    delete basePtr;
    return 0;
}