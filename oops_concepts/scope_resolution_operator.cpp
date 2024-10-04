#include<iostream>
class Rectangle {

private:
    int length;
    int breadth;

public:
    // Constructors
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);

    // Getters
    int getLength();
    int getBreadth();

    // Setters
    void setLength(int l);
    void setBreadth(int b);

    // Member functions
    int area();
    int perimeter();
    bool isSquare();

    // Destructor
    ~Rectangle();
};

// Default constructor
Rectangle::Rectangle() {
    length = 1;
    breadth = 2;
}

// Parameterized constructor
Rectangle::Rectangle(int l, int b) {
    length = l;
    breadth = b;
}

// Copy constructor
/*
Why Pass by Reference?

When you pass Rectangle &r, you are passing the object r by reference, which means:

	•	You are passing the memory address of r, not a copy of it. 
        This is crucial to avoid unnecessary copying and to prevent
        infinite recursion that would occur if the copy constructor itself tried to copy the object by value.
	•	It allows you to modify the original object if needed (though here, you are just copying its properties).
	•	Passing by reference is more efficient than passing by value, especially for large objects.
*/
Rectangle::Rectangle(Rectangle &r) {
    length = r.length;
    breadth = r.breadth;
}

// Getter for length
int Rectangle::getLength() {
    return length;
}

// Getter for breadth
int Rectangle::getBreadth() {
    return breadth;
}

// Setter for length
void Rectangle::setLength(int l) {
    length = l;
}

// Setter for breadth
void Rectangle::setBreadth(int b) {
    breadth = b;
}

// Calculate area
int Rectangle::area() {
    return length * breadth;
}

// Calculate perimeter
int Rectangle::perimeter() {
    return 2 * (length + breadth);
}

// Check if rectangle is a square
bool Rectangle::isSquare() {
    return length == breadth;
}

// Destructor
Rectangle::~Rectangle() {
    // De-allocation (if needed)
    std::cout << "Rectangle destroyed" << std::endl;
}

// Main function
int main() {
    Rectangle r1(10, 5);
    Rectangle r2(r1);

    std::cout << "Area: " << r1.area() << std::endl;
    std::cout << "Perimeter: " << r1.perimeter() << std::endl;
    std::cout << "Is Square: " << (r1.isSquare() ? "Yes" : "No") << std::endl;

    return 0;
}