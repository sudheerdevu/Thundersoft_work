#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x;

    cout << "Address of x: " << ptr << endl;  // Outputs address of x
    cout << "Value of x through ptr: " << *ptr << endl;  // Dereference to get value

    *ptr = 20;  // Modify value through pointer
    cout << "Modified value of x: " << x << endl;

    return 0;
}