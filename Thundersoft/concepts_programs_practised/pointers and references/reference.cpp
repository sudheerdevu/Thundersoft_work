#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int& ref = x;

    cout << "Value of x: " << x << endl;
    ref = 20;  // Modifies x through ref
    cout << "Modified value of x: " << x << endl;

    return 0;
}