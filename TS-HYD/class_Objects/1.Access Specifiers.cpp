#include <iostream>
using namespace std;

class Demo {
private:
    int privateVar;  // Only accessible within the class

public:
    int publicVar;   // Accessible from outside the class

    void setPrivateVar(int val) {
        privateVar = val;
    }

    int getPrivateVar() {
        return privateVar;
    }
};

int main() {
    Demo obj;
    obj.publicVar = 10;  // Accessible
    obj.setPrivateVar(20);  // Using public function to modify private variable
    
    cout << "Public Variable: " << obj.publicVar << endl;
    cout << "Private Variable (via getter): " << obj.getPrivateVar() << endl;
    return 0;
}