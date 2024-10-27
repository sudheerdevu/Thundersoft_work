#include <iostream>

int main() {
    int x = 10;
    const int* ptr1 = &x;       // Pointer to constant data
    int* const ptr2 = &x;       // Constant pointer
    const int* const ptr3 = &x; // Constant pointer to constant data

    // *ptr1 = 20;   // Error: Cannot modify through ptr1
    // ptr2 = &y;    // Error: Cannot modify address in ptr2
    std::cout << "Pointer to constant data: " << *ptr1 << std::endl;
    std::cout << "Constant pointer: " << *ptr2 << std::endl;

    return 0;
}