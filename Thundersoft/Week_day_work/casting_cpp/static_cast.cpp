#include <iostream>
using namespace std;

int main() {
    double num = 5.67;
    int intNum = static_cast<int>(num);
    cout << "Double: " << num << endl;
    cout << "After static_cast to int: " << intNum << endl;
    return 0;
}