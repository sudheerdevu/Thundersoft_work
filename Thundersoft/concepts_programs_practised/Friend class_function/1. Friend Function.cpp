#include <iostream>
using namespace std;

class Box {
private:
    int width;

public:
    Box(int w) : width(w) {}

    // Friend function declaration
    friend void displayWidth(const Box& b);
};

// Friend function definition
void displayWidth(const Box& b) {
    cout << "Width of box: " << b.width << endl;
}

int main() {
    Box box(10);
    displayWidth(box);  // Friend function can access private member

    return 0;
}