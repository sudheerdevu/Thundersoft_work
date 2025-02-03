#include <iostream>

class Base {
public:
    virtual void derivedFunction() { std::cout << "Base version of derivedFunction\n"; }
};

class Derived : public Base {
public:
    void derivedFunction() override { std::cout << "Derived version of derivedFunction\n"; }
    void exclusiveFunction() { std::cout << "Only in Derived class!\n"; }
};

int main() {
    Base* b = new Derived();  // Base pointer pointing to Derived object
    b->derivedFunction();  // ✅ Calls Derived version (Polymorphism)

    // b->exclusiveFunction();  // ❌ ERROR: Base does not have this function!

    Derived* d = dynamic_cast<Derived*>(b);
    if (d) {
        d->exclusiveFunction();  // ✅ Works after casting!
    }

    delete b;
    return 0;
}