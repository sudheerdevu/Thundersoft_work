#include <iostream>

void greet() {
    std::cout << "Hello from function!" << std::endl;
}

void farewell() {
    std::cout << "Goodbye!" << std::endl;
}

int main() {
    // Function pointer declaration
    void (*funcPtr)();

    // Point to greet function
    funcPtr = greet;
    funcPtr();   // Output: Hello from function!

    // Point to farewell function
    funcPtr = farewell;
    funcPtr();   // Output: Goodbye!

    return 0;
}