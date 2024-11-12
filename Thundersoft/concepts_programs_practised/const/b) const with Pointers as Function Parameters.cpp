#include <iostream>
using namespace std;

void display(const int* ptr) {
    // *ptr = 20;  // Error: ptr points to constant data and cannot be modified
    cout << "Value: " << *ptr << endl;
}

int main() {
    int x = 10;
    display(&x);
    return 0;
}