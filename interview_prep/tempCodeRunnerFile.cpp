#include <iostream>

class Base {
public:
    virtual void show() {}  // At least one virtual function
};

class Derived : public Base {
public:
    void derivedFunction() { std::cout << "Derived function\n"; }
};

int main() {
    Base* b = new Derived();  // Base pointer pointing to Derived object

    Derived* d = dynamic_cast<Derived*>(b);  // Safe downcasting
    if (d) {
        d->derivedFunction();  // Output: Derived function
    } else {
        std::cout << "Failed to cast\n";
    }

    delete b;
    return 0;
}