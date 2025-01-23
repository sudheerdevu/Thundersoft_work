#include <iostream>
#include "Sorting.h"

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int* arr = new int[n];
    std::cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];

        
    }

    // Initialize Sorting object with pointer to the array and its size
    Sorting sortingObj(arr, n);

    int choice;
    std::cout << "Choose display order (1 for Ascending, 2 for Descending): ";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Array displayed in ascending order:\n";
        sortingObj.displayAscending();
    } else if (choice == 2) {
        std::cout << "Array displayed in descending order:\n";
        sortingObj.displayDescending();
    } else {
        std::cout << "Invalid choice.\n";
        delete[] arr;
        return 1;
    }

    // Clean up dynamically allocated memory in main
    delete[] arr;

    return 0;
}
