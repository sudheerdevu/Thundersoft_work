#include <iostream>
using namespace std;

template<size_t N>
void printArray(const int (&arr)[N]) {
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr);
    return 0;
}