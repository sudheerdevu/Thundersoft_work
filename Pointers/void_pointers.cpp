#include <iostream>

int main() {
    int x = 42;
    float y = 3.14f;

    // Void pointers can point to any type
    void* ptr;

    ptr = &x;
    std::cout << "Integer via void pointer: " << *(static_cast<int*>(ptr)) << std::endl;

    ptr = &y;
    std::cout << "Float via void pointer: " << *(static_cast<float*>(ptr)) << std::endl;

    return 0;
}