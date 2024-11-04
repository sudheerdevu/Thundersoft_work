#include <iostream>

namespace Math {
    int add(int a, int b) {
        return a + b;
    }
}

int main() {
    int sum = Math::add(3, 5); // Using scope resolution to call add() from Math namespace
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}