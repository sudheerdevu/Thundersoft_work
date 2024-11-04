#include <iostream>
using namespace std;

class StaticFunction {
public:
    static void display() {
        cout << "This is a static member function!" << endl;
    }
};

int main() {
    StaticFunction::display();  // Static function can be called without an object
    return 0;
}