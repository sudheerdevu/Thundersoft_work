#include <iostream>
using namespace std;

class Sample {
public:
    void display();  // Function declaration
};

// Function definition outside the class
void Sample::display() {
    cout << "Member function defined outside the class!" << endl;
}

int main() {
    Sample obj;
    obj.display();  // Calling the member function
    return 0;
}