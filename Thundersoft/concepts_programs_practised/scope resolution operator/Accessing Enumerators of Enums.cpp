#include <iostream>

enum class Color {
    Red,
    Green,
    Blue
};

int main() {
    Color color = Color::Green;

    if (color == Color::Green) {
        std::cout << "Color is Green" << std::endl;
    }

    return 0;
}