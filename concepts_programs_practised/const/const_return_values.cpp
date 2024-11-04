#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int v) : value(v) {}

    const int& getValue() const {  // Returns a const reference
        return value;
    }
};

int main() {
    MyClass obj(10);
    const int& val = obj.getValue();
    // val = 20;  // Error: cannot modify const return value
    cout << "Value: " << val << endl;

    return 0;
}