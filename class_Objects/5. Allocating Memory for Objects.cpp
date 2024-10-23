#include <iostream>
using namespace std;

class DynamicObject {
public:
    void showMessage() {
        cout << "Dynamically allocated object!" << endl;
    }
};

int main() {
    // Dynamically allocating memory for an object
    DynamicObject* obj = new DynamicObject();
    
    obj->showMessage();  // Accessing object via pointer
    
    // Freeing memory
    delete obj;
    return 0;
}