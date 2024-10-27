#include <iostream>

int main() {
    int* ptr = nullptr;   // Null pointer (points to no valid memory address)

    if (ptr == nullptr) {
        std::cout << "Pointer is null, not pointing to any address." << std::endl;
    }

    // Assign memory and check again
    int x = 100;
    ptr = &x;
    if (ptr != nullptr) {
        std::cout << "Pointer now points to x with value: " << *ptr << std::endl;
    }

    return 0;
}