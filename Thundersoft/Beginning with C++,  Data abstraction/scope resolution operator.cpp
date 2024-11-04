#include <iostream>
using namespace std;

int x = 100;  // Global variable

int main() {
    int x = 50;  // Local variable

    cout << "Local x: " << x << endl;         // Output: 50
    cout << "Global x: " << ::x << endl;      // Output: 100 (using scope resolution)

    return 0;
}