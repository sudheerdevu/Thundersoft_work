#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {  // Default constructor
        cout << "Default constructor called" << endl;
    }
};

int main() {
    MyClass obj;  // Default constructor is called here
    return 0;
}
