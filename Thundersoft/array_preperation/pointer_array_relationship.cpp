#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;  // Array decays into pointer

    cout << "Using pointer arithmetic to access elements:\n";
    for (int i = 0; i < 5; ++i) {
        cout << *(ptr + i) << " ";  // Access using pointer
    }
    cout << endl;
    return 0;
}