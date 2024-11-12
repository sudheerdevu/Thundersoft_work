#include <iostream>
using namespace std;

class MyClass {
public:
    void display(); // Declaration inside class
};

// Definition outside class using ::
void MyClass::display() {
    cout << "Hello from MyClass!" << endl;
}

int main() {
    MyClass obj;
    obj.display();

    return 0;
}