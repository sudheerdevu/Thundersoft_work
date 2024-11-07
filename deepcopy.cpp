#include <iostream>
using namespace std;

class DeepCopy {
private:
    int* data;

public:
    DeepCopy(int value) {
        data = new int(value); 
    }
    DeepCopy(const DeepCopy& s) {
        data = new int(*s.data); 
        cout << "Deep copy constructor called\n";
    }
    void display() const {
        cout << "Data: " << *data << endl;
    }
};

int main() {
    DeepCopy obj1(20);  
    DeepCopy obj2 = obj1; 
    obj1.display();
    obj2.display();
    return 0;
}