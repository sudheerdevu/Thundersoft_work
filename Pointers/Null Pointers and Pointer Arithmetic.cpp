#include <iostream>

int main() {
    int* ptr = nullptr;  // A pointer initialized to nullptr (doesn't point to anything)

    if (ptr == nullptr) {
        std::cout << "Pointer is null." << std::endl;
    }

    return 0;
}

/*
int main() {
    int arr[3] = {10, 20, 30};  // An array of 3 integers
    int* ptr = arr;  // Pointer to the first element of the array

    std::cout << "Address of arr[0]: " << ptr << std::endl;
    std::cout << "Value at arr[0] (dereferenced): " << *ptr << std::endl;

    ptr++;  // Move pointer to the next element
    std::cout << "Value at arr[1] (dereferenced): " << *ptr << std::endl;

    return 0;
}

*/