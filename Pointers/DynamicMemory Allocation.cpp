//Allocating and Deallocating a Single Integer:

#include <iostream>

int main() {
    int* ptr = new int;  // Dynamically allocate memory for an integer
    *ptr = 42;  // Assign a value to the dynamically allocated memory

    std::cout << "Value of dynamically allocated memory: " << *ptr << std::endl;

    delete ptr;  // Deallocate the memory

    return 0;
}

/*
Allocating and Deallocating an Array:

#include <iostream>

int main() {
    int* arr = new int[5];  // Dynamically allocate memory for an array of 5 integers

    // Assign values to the array
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
    }

    // Print array values
    for (int i = 0; i < 5; ++i) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    delete[] arr;  // Deallocate memory for the array

    return 0;
}

*/