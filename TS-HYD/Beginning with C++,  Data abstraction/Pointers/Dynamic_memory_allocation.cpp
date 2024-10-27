#include <iostream>

int main() {
    // Allocate memory dynamically for a single integer
    int* ptr = new int(10);
    std::cout << "Dynamically allocated value: " << *ptr << std::endl;

    // Free memory
    delete ptr;

    // Dynamic array
    int* arr = new int[5];
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    // Free array memory
    delete[] arr;

    return 0;
}