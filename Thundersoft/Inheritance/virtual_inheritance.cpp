#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Display from A" << endl;
    }
};

class B : public A {};
class C : public A {};
class D : public B, public C {}; // Diamond problem: which A::display to call?

int main() {
    D obj;
    obj.display(); // Error: Ambiguous
    return 0;
}