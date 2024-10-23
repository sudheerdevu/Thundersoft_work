#include <iostream>
using namespace std;

// Call by value (creates a copy)
void callByValue(int a) {
    a = 100;  // Modifies the copy, not the original
}

// Call by reference (modifies the original)
void callByReference(int &a) {
    a = 100;  // Modifies the original
}

int main() {
    int num = 10;
    
    callByValue(num);
    cout << "After call by value: " << num << endl;  // Output: 10
    
    callByReference(num);
    cout << "After call by reference: " << num << endl;  // Output: 100

    return 0;
}