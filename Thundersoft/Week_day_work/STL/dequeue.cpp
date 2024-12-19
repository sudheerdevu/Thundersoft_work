#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {1, 2, 3};

    dq.push_front(0); // Add to front
    dq.push_back(4);  // Add to back

    cout << "Deque elements: ";
    for (int val : dq) {
        cout << val << " ";
    }
    cout << endl;

    dq.pop_front(); // Remove from front
    dq.pop_back();  // Remove from back

    cout << "Deque after popping: ";
    for (int val : dq) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}