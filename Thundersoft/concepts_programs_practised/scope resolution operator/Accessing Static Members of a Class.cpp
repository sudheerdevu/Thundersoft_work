#include <iostream>
using namespace std;

class Counter {
public:
    static int count;

    Counter() {
        count++;
    }
};

int Counter::count = 0; // Initialize static member using scope resolution

int main() {
    Counter c1, c2, c3;
    cout << "Total count: " << Counter::count << endl; // Access static member

    return 0;
}