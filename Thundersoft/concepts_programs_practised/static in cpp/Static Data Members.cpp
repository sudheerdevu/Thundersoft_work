#include <iostream>
using namespace std;

class Counter {
public:
    static int count;  // Declaration of static data member

    Counter() {
        count++;  // Increment count for each object created
    }
};

// Definition and initialization of static data member
int Counter::count = 0;

int main() {
    Counter c1, c2, c3;
    cout << "Total count: " << Counter::count << endl;  // Accessing via class name

    return 0;
}