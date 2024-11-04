#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int v) : value(v) {}

    int getValue() const {  // const member function
        return value;
    }

    void setValue(int v) {
        value = v;
    }
};

int main() {
    const MyClass obj(10);  // const object
    cout << "Value: " << obj.getValue() << endl;  // OK

    // obj.setValue(20);  // Error: cannot call non-const function on const object

    return 0;
}