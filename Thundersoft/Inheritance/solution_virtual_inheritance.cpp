#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Display from A" << endl;
    }
};

class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};

int main() {
    D obj;
    obj.display(); // Unambiguous due to virtual inheritance
    return 0;
}