#include <iostream>
using namespace std;

void display(const int& num) {
    // num = 20;  // Error: num is const and cannot be modified
    cout << "Number: " << num << endl;
}

int main() {
    int x = 10;
    display(x);
    return 0;
}