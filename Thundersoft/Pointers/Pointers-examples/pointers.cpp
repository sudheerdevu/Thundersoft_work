#include <iostream>

int main() {
    int a = 10;     // A simple integer variable
    int* ptr = &a;  // Pointer storing the address of 'a'

    std::cout << "Address of a: " << ptr << std::endl;
    std::cout << "Value of a (dereferenced from ptr): " << *ptr << std::endl;

    return 0;
}