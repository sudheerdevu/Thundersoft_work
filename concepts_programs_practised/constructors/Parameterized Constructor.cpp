#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int v) {  // Parameterized constructor
        value = v;
        cout << "Parameterized constructor called, value = " << value << endl;
    }
};

int main() {
    MyClass obj(10);  // Parameterized constructor is called with argument 10
    return 0;
}