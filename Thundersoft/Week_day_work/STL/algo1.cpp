#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {10, 5, 3, 20, 15};

    sort(vec.begin(), vec.end()); // Ascending sort

    cout << "Sorted elements: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}