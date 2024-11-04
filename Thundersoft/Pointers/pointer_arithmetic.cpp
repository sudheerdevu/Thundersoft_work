#include <iostream>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr;   // Pointer to the start of the array

    for (int i = 0; i < 5; ++i) {
        std::cout << "Value at arr[" << i << "] using pointer arithmetic: " << *(ptr + i) << std::endl;
    }

    return 0;
}