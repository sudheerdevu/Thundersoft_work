#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> mySet = {10, 20, 30, 20};

    mySet.insert(40); // Add an element
    mySet.erase(20);  // Remove an element

    cout << "Set elements: ";
    for (int val : mySet) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}