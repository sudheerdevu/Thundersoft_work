#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    string name;

public:
    Animal(string n) : name(n) {}
    void display() {
        cout << "This is an animal named " << name << "." << endl;
    }
};

// Derived class
class Dog : public Animal {
private:
    string breed;

public:
    Dog(string n, string b) : Animal(n), breed(b) {}
    void bark() {
        cout << name << " barks loudly. It is a " << breed << "." << endl;
    }
};

int main() {
    Dog dog("Buddy", "Golden Retriever");
    dog.display(); // Accessing base class method
    dog.bark();    // Accessing derived class method
    return 0;
}