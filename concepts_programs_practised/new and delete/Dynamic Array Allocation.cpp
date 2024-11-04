#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Allocate an array dynamically
    int* arr = new int[size];

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    // Display the elements
    cout << "Array elements are: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}