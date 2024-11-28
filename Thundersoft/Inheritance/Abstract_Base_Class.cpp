#include <iostream>
using namespace std;

// Abstract base class
class Employee {
protected:
    string name;

public:
    Employee(string n) : name(n) {}
    virtual void displayDetails() = 0; // Pure virtual function
};

// Derived class
class Developer : public Employee {
private:
    string language;

public:
    Developer(string n, string lang) : Employee(n), language(lang) {}
    void displayDetails() override {
        cout << name << " is a developer skilled in " << language << "." << endl;
    }
};

// Another derived class
class Manager : public Employee {
private:
    int teamSize;

public:
    Manager(string n, int size) : Employee(n), teamSize(size) {}
    void displayDetails() override {
        cout << name << " manages a team of " << teamSize << " members." << endl;
    }
};

int main() {
    Employee* dev = new Developer("Alice", "C++");
    Employee* mgr = new Manager("Bob", 10);

    dev->displayDetails();
    mgr->displayDetails();

    delete dev;
    delete mgr;
    return 0;
}