#include <iostream>
using namespace std;

class MyClass {
public:
    void* operator new(size_t size) {
        cout << "Custom new called for size: " << size << endl;
        return ::operator new(size);
    }

    void operator delete(void* ptr) {
        cout << "Custom delete called" << endl;
        ::operator delete(ptr);
    }
};

int main() {
    MyClass* obj = new MyClass(); // Calls custom new
    delete obj;                   // Calls custom delete

    return 0;
}