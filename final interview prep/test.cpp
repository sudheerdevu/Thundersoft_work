#include <iostream>
using namespace std;

void modifyValue(int *ptr) { // Passing by pointer
    *ptr = 42; // Dereference to modify the value at the address
}

int main() {
    int x = 10;                // Step 1: Declare and initialize x
    cout << "Before: " << x << endl;

    modifyValue(&x);           // Step 2: Pass the address of x to the function
    cout << "After: " << x << endl; // Step 4: x is modified

    return 0;
}