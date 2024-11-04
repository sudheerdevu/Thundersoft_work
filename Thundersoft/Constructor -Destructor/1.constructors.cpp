#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;
    int height;

public:
    // Default constructor
    Box() {
        length = 1;
        width = 1;
        height = 1;
    }

    // Parameterized constructor
    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    // Copy constructor
    Box(const Box &b) {
        length = b.length;
        width = b.width;
        height = b.height;
    }

    void displayVolume() {
        cout << "Volume: " << length * width * height << endl;
    }
};

int main() {
    Box box1;  // Calls default constructor
    Box box2(2, 3, 4);  // Calls parameterized constructor
    Box box3(box2);  // Calls copy constructor

    box1.displayVolume();  // Volume: 1
    box2.displayVolume();  // Volume: 24
    box3.displayVolume();  // Volume: 24 (copy of box2)

    return 0;
}