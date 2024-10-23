#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Setter to set dimensions (abstracted from the user)
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }
    
    // Function to calculate the area
    int getArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(5, 10); // Abstraction in action
    cout << "Area of Rectangle: " << rect.getArea() << endl;
    return 0;
}