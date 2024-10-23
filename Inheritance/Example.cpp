#include <iostream>
using namespace std;

// Base class Animal
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

// Derived class Dog inheriting from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

// Derived class Cat inheriting from Animal
class Cat : public Animal {
public:
    void meow() {
        cout << "Meowing..." << endl;
    }
};

// Derived class Bulldog inheriting from Dog
class Bulldog : public Dog {
public:
    void display() {
        cout << "I am a Bulldog." << endl;
    }
};

int main() {
    Bulldog b;
    b.eat();    // Inherited from Animal
    b.bark();   // Inherited from Dog
    b.display(); // Bulldog's method

    return 0;
}