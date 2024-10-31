#include "Sorting.h"
#include <iostream>

// Constructor to initialize the array with pointer and size
Sorting::Sorting(int* inputArr, int size) : size(size) {
    arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = inputArr[i];
    }
}

// Destructor to release allocated memory
Sorting::~Sorting() {
    delete[] arr;
}

// Displays the array elements in ascending order (from the start to end)
void Sorting::displayAscending() const {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Displays the array elements in descending order (from end to start)
void Sorting::displayDescending() const {
    for (int i = size - 1; i >= 0; --i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}