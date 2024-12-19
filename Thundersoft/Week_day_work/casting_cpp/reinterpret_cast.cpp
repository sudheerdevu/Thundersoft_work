#include <iostream>
using namespace std;

struct A {
    int x = 42;
};

int main() {
    A obj;
    int* intPtr = reinterpret_cast<int*>(&obj);
    cout << "Object memory as int: " << *intPtr << endl;

    return 0;
}