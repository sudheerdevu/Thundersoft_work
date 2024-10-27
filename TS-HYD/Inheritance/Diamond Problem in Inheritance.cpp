#include <iostream>
using namespace std;

// Base class A
class A {
public:
    void show() {
        cout << "Class A" << endl;
    }
};

// Derived class B inheriting from A
class B : virtual public A {
public:
    void show() {
        cout << "Class B" << endl;
    }
};

// Derived class C inheriting from A
class C : virtual public A {
public:
    void show() {
        cout << "Class C" << endl;
    }
};

// Derived class D inheriting from B and C
class D : public B, public C {
public:
    void show() {
        cout << "Class D" << endl;
    }
};

int main() {
    D obj;
    obj.B::show();  // Calls show from class B
    obj.C::show();  // Calls show from class C
    obj.show();     // Calls show from class D
    obj.A::show();  // Calls show from class A, no ambiguity
    return 0;
}


/*
        Explanation of the Example

	1.	Base Class A: Defines a method show().
	2.	Derived Classes B and C: Both inherit from A using virtual inheritance, which prevents multiple instances of A.
	3.	Derived Class D: Inherits from both B and C. The show() method in D is called to demonstrate its functionality.
	4.	Accessing Base Class A’s Method: By explicitly specifying obj.A::show(), you can call the base class method without ambiguity.
    
        A
       / \
      B   C     ----- this is like diamond problem looks like
       \ /
        D

*/