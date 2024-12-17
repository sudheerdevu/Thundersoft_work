#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3};
    vec.push_back(4);  // Add an element

    cout << "Vector elements: ";
    for (int x : vec) {
        cout << x << " ";
    }

    vec.resize(5, 0);  // Resize and initialize new elements to 0
    cout << "\nAfter resizing: ";
    for (int x : vec) {
        cout << x << " ";
    }

    return 0;
}