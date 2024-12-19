#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30};
    vec.push_back(40); // Add an element
    vec.pop_back();    // Remove last element

    cout << "Elements in vector: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Size: " << vec.size() << endl;
    cout << "First element: " << vec.front() << endl;
    cout << "Last element: " << vec.back() << endl;

    return 0;
}