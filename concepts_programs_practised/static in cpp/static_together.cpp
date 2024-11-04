#include <iostream>
using namespace std;

class Tracker {
private:
    static int objectCount;  // Static data member to track object count

public:
    Tracker() {
        objectCount++;  // Increment count on creation
    }

    ~Tracker() {
        objectCount--;  // Decrement count on destruction
    }

    // Static member function to get object count
    static int getObjectCount() {
        return objectCount;
    }
};

// Definition of static data member
int Tracker::objectCount = 0;

int main() {
    Tracker t1;
    cout << "Current object count: " << Tracker::getObjectCount() << endl;

    {
        Tracker t2, t3;
        cout << "Current object count: " << Tracker::getObjectCount() << endl;
    }  // t2 and t3 are destroyed here

    cout << "Current object count: " << Tracker::getObjectCount() << endl;
    return 0;
}