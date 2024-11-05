#include <iostream>
using namespace std;

class Counter {
public:
    static int count;   // Declaration of static member

    Counter() {
        count++;        // Increment count when an object is created
    }

    ~Counter() {
        count--;        // Decrement count when an object is destroyed
    }

    static int getCount() {
        return count;   // Access static member through a static function
    }
};

// Definition and initialization of the static member
int Counter::count = 0;

int main() {
    cout << "Initial count: " << Counter::getCount() << endl;

    Counter c1, c2;
    cout << "Count after creating c1 and c2: " << Counter::getCount() << endl;

    {
        Counter c3;
        cout << "Count after creating c3: " << Counter::getCount() << endl;
    } // c3 goes out of scope here

    cout << "Count after c3 is destroyed: " << Counter::getCount() << endl;

    return 0;
}