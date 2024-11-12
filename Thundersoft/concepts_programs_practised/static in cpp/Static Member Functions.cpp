#include <iostream>
using namespace std;

class Counter {
private:
    static int count;

public:
    Counter() {
        count++;
    }

    // Static member function
    static int getCount() {
        return count;  // Accessing static data member
    }
};

// Definition of static data member
int Counter::count = 0;

int main() {
    Counter c1, c2, c3;
    cout << "Total count: " << Counter::getCount() << endl;  // Accessing static member function

    return 0;
}