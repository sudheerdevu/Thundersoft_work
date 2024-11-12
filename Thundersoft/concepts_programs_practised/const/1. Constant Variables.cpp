#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    // MAX_SIZE = 200;  // Error: cannot assign to const variable

    cout << "Max size is: " << MAX_SIZE << endl;
    return 0;
}