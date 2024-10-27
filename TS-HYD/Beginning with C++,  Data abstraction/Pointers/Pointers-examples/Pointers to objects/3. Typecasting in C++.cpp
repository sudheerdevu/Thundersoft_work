//Example of static_cast and dynamic_cast:

#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class" << endl;
    }
};

int main() {
    Base* b = new Derived(); // Base pointer to Derived object

    // Using dynamic_cast
    Derived* d = dynamic_cast<Derived*>(b);
    if (d) {
        d->show(); // Safe downcast
    }

    // Using static_cast
    Derived* d2 = static_cast<Derived*>(b);
    d2->show(); // Safe if b is actually pointing to a Derived object

    delete b; // Freeing allocated memory
    return 0;
}