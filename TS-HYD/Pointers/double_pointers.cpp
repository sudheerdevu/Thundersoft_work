#include <iostream>

int main() {
    int x = 5;
    int* ptr = &x;
    int** dptr = &ptr;  // Double pointer to int

    // Access the value of x using double pointer
    std::cout << "Value of x using double pointer: " << **dptr << std::endl;

    return 0;
}