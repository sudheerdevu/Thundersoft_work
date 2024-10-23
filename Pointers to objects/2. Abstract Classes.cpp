#include <iostream>
using namespace std;

class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0; 

    // Concrete function
    void info() {
        cout << "This is a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override { // Implementing pure virtual function
        cout << "Drawing a circle." << endl;
    }
};

int main() {
    Circle circle; // Instantiate derived class
    circle.draw(); // Calling overridden function
    circle.info(); // Calling base class function

    // Shape shape; // Error: Cannot instantiate an abstract class
    return 0;
}