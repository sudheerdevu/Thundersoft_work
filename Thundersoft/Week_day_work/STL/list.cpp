#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList = {1, 2, 3, 4, 5};

    myList.push_front(0); // Add to front
    myList.push_back(6);  // Add to back

    myList.pop_front();   // Remove from front
    myList.pop_back();    // Remove from back

    cout << "List elements: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}