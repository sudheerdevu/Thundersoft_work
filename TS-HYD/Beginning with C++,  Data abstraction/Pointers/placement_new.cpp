#include <iostream>
#include <new>

int main() {
    char buffer[sizeof(int)];  // Pre-allocated buffer

    // Construct integer at the specified location
    int* p = new (buffer) int(42);
    std::cout << "Value in placement new: " << *p << std::endl;

    // Explicitly call the destructor
    p->~int();

    return 0;
}