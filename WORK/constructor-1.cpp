#include <iostream>
using namespace std;

class A {
    private:
    int m;
public:
    A(int n = 0) : m(n) {
        cout << "Constructor called for " << m << endl;
    }

    A(const A& a) : m(a.m) {
        cout << "Copy constructor called" << endl;
    }

    A& operator=(const A& a) {
        if (this != &a) {
            m = a.m;
        }
        cout << "Assignment operator called" << endl;
        return *this;
    }


};

int main() {
    A a1(5);
    A a2 = a1;       // Calls copy constructor
    A a3;
    a3 = a1;         // Calls assignment operator
    return 0;
}