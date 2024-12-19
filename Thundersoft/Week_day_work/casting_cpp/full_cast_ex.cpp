#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void greet() { cout << "Hello from Derived!" << endl; }
};

void testCasting() {
    // C-Style Cast
    double pi = 3.14159;
    int approxPi = (int)pi; // C-Style
    cout << "C-Style cast: " << approxPi << endl;

    // static_cast
    int roundedPi = static_cast<int>(pi); // static_cast
    cout << "static_cast: " << roundedPi << endl;

    // dynamic_cast
    Base* basePtr = new Derived;
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    if (derivedPtr) {
        derivedPtr->greet();
    } else {
        cout << "dynamic_cast failed" << endl;
    }
    delete basePtr;

    // const_cast
    const int x = 10;
    int* modifiable = const_cast<int*>(&x);
    *modifiable = 20; // Undefined behavior
    cout << "const_cast modified value: " << *modifiable << endl;

    // reinterpret_cast
    Base baseObj;
    int* intMem = reinterpret_cast<int*>(&baseObj);
    cout << "Memory as int using reinterpret_cast: " << *intMem << endl;
}

int main() {
    testCasting();
    return 0;
}