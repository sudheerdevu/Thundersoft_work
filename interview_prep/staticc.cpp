#include <iostream>
using namespace std;

class ShallowCopy {
private:
    int* data;

public:
    // Constructor
    ShallowCopy(int value) {
        data = new int(value); // dynamically allocate memory
    }

    // Shallow copy constructor (default copy constructor does this)
    ShallowCopy(const ShallowCopy& source) {
        data = source.data; // copy pointer only (shallow copy)
    }

    // Display function
    void display() {
        cout << "Data: " << *data << endl;
    }

    // Destructor
    ~ShallowCopy() {
        delete data; // releasing the dynamically allocated memory
        cout << "Destructor called for ShallowCopy\n";
    }
};

int main() {
    ShallowCopy obj1(10);
    ShallowCopy obj2 = obj1; // Shallow copy

    cout << "Object 1: ";
    obj1.display();
    cout << "Object 2: ";
    obj2.display();

    return 0;
}