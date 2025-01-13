#include <iostream>
#include "math_operations.h" // Include the header file

// Function declaration
void display();

int main() {
    std::cout << "Addition: " << add(10, 20) << std::endl;
    std::cout << "Subtraction: " << subtract(30, 15) << std::endl;
    display(); // Call the function from other.cpp
    return 0;
}