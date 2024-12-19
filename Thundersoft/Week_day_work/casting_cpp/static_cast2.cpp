#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() { cout << "Base class" << endl; }
};

class Derived : public Base {
public:
    void display() override { cout << "Derived class" << endl; }
};

int main() {
    Derived derivedObj;
    Base* basePtr = static_cast<Base*>(&derivedObj); // Upcasting
    basePtr->display();

    Base baseObj;
    // Downcasting is unsafe and needs caution
    Derived* derivedPtr = static_cast<Derived*>(&baseObj);
    derivedPtr->display(); // Undefined behavior
    return 0;
}