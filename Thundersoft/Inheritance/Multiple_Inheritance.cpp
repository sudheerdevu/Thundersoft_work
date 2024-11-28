#include <iostream>
using namespace std;

// Base class 1
class Person {
protected:
    string name;

public:
    Person(string n) : name(n) {}
};

// Base class 2
class Worker {
protected:
    string profession;

public:
    Worker(string p) : profession(p) {}
};

// Derived class
class Manager : public Person, public Worker {
public:
    Manager(string n, string p) : Person(n), Worker(p) {}
    void display() {
        cout << name << " is a " << profession << "." << endl;
    }
};

int main() {
    Manager manager("Alice", "Software Engineer");
    manager.display();
    return 0;
}