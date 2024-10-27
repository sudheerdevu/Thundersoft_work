#include <iostream>

int main() {
    int x = 42;
    void* ptr = &x;  // Void pointer

    // Cast back to int pointer
    int* intPtr = static_cast<int*>(ptr);
    std::cout << "Value after casting: " << *intPtr << std::endl;

    return 0;
}