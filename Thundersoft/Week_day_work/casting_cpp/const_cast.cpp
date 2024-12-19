#include <iostream>
using namespace std;

void modifyConst(const int* ptr) {
    int* nonConstPtr = const_cast<int*>(ptr);
    *nonConstPtr = 42;
}

int main() {
    const int num = 10;
    cout << "Before modification: " << num << endl;
    modifyConst(&num);
    cout << "After modification: " << num << endl; // May invoke undefined behavior
    return 0;
}