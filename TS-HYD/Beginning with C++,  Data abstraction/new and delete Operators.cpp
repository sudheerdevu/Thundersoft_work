#include <iostream>
using namespace std;

int main() {
    // Dynamically allocate memory for an integer
    int* ptr = new int(25);
    
    cout << "Value: " << *ptr << endl;  // Output: 25
    
    // Deallocate the memory
    delete ptr;
    
    return 0;
}