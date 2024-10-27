#include <iostream>

int main() {
    int x = 10;         // Regular integer
    int* ptr = &x;      // Pointer to integer, initialized to the address of x

    // Output the address and value
    std::cout << "Address of x: " << ptr << std::endl;
    std::cout << "Value of x via pointer: " << *ptr << std::endl;

    // Modify the value through the pointer
    *ptr = 20;
    std::cout << "New value of x: " << x << std::endl;

    return 0;
}

