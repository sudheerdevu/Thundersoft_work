#include <iostream>
using namespace std;

// Base class
class Shape {
protected:
    double dimension;

public:
    Shape(double d) : dimension(d) {}
    virtual void displayArea() = 0; // Pure virtual function
};

// Derived class 1
class Square : public Shape {
public:
    Square(double side) : Shape(side) {}
    void displayArea() override {
        cout << "Square area: " << dimension * dimension << endl;
    }
};

// Derived class 2
class Circle : public Shape {
public:
    Circle(double radius) : Shape(radius) {}
    void displayArea() override {
        cout << "Circle area: " << 3.14 * dimension * dimension << endl;
    }
};

int main() {
    Square square(4);
    Circle circle(5);

    square.displayArea();
    circle.displayArea();

    return 0;
}