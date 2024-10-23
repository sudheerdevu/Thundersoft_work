#include <iostream>
using namespace std;

void printMessage(string message = "Hello, World!") {
    cout << message << endl;
}

int main() {
    printMessage();  // Uses the default argument
    printMessage("Custom Message!");  // Uses the provided argument
    
    return 0;
}