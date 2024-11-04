#include <iostream>

int main() {
    int* ptr = new int(10);
    std::cout << "Value: " << *ptr << std::endl;

    delete ptr;         // Free memory
    ptr = nullptr;      // Avoid dangling pointer

    // Prevent double deletion by setting to nullptr after deletion
    if (ptr != nullptr) {
        delete ptr;
    }

    return 0;
}