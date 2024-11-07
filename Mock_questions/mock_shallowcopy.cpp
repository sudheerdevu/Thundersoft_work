#include <iostream>
using namespace std;

class ShallowCopy {
private:
    int* data;

public:
    ShallowCopy(int value) {
        data = new int(value); 
    }

    ShallowCopy(const ShallowCopy &s) {
        data = s.data;
        cout << "Shallow copy constructor called\n";
    }

    void display() const {
        cout << "Data: " << *data << endl;
    }

};

int main() {
    ShallowCopy obj1(10);  
    ShallowCopy obj2 = obj1;     
    obj1.display();
    obj2.display();
    return 0;
}




program to show difference between copy constructor an assignment operator