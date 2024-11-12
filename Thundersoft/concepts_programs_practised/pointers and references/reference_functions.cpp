#include <iostream>
using namespace std;

void increment(int& ref) {  // Pass by reference
    ref++;
}

int main() {
    int x = 5;
    increment(x);  // x is modified in the function
    cout << "Incremented value: " << x << endl;

    return 0;
}