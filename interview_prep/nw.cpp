#include <iostream>
using namespace std;

int main() {
    // Using new to allocate a single integer
    int* singleValue = new int(42);
    cout << "Single Value: " << *singleValue << endl;

    // Using new to allocate an array
    int* arrayValues = new int[5]; // uninitialized
    for (int i = 0; i < 5; ++i) {
        arrayValues[i] = i * 10; // initialize each element
        cout << "Array Value at index " << i << ": " << arrayValues[i] << endl;
    }

    // Deallocate memory
    delete singleValue;       // single integer deletion
    delete[] arrayValues;      // array deletion

    return 0;
}