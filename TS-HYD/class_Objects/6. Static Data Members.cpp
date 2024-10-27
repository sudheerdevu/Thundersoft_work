#include <iostream>
using namespace std;

class Counter {
public:
    static int count;  // Static data member

    Counter() {
        count++;
    }

    static void showCount() {
        cout << "Count: " << count << endl;
    }
};

// Initializing static data member
int Counter::count = 0;

int main() {
    Counter obj1, obj2, obj3;
    Counter::showCount();  // Output: Count: 3 (shared across all objects)
    return 0;
}