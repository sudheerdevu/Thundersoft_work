#include <iostream>
using namespace std;

int value = 10; // Global variable

int main() {
    int value = 20; // Local variable

    cout << "Local value: " << value << endl;       // Outputs local variable (20)
    cout << "Global value: " << ::value << endl;    // Outputs global variable (10)

    return 0;
}