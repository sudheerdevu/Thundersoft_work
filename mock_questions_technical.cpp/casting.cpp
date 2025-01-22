#include <iostream>
using namespace std;

class base {
public:
    virtual void display() {
        cout << "base class" << endl;
    }
};

class derived : public base {
public:
    void display() override {
        cout << "derived class" << endl;
    }
};

int main() {
    cout << "static_cast" << endl;
    int num = 10;
    double num1 = static_cast<double>(num);
    cout << num << " " << num1 << endl;

    cout << "dynamic_cast" << endl;
    base* baseptr = new derived();
    derived* ptr2 = dynamic_cast<derived*>(baseptr);
    if (ptr2) {
        ptr2->display(); //Call derived display
    } else {
        cout << "failed" << endl;
    }

    cout << "const_cast" << endl;
    const int constNum = 60;
    int& non = const_cast<int&>(constNum);
    non = 24; 
    cout << "org value: " << constNum << " after: " << non << endl;

    cout << "reinterpret_cast" << endl;
    int* ptrr = &num;
    char* charptr = reinterpret_cast<char*>(ptrr);
    cout << ptrr << " reinterpreted: " << static_cast<void*>(charptr) << endl;

    delete baseptr; 
    return 0;
    
}