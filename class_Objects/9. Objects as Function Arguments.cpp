#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v) : value(v) {}

    void display() {
        cout << "Value: " << value << endl;
    }

    // Passing object by value
    void addValue(Number obj) {
        cout << "Adding value: " << obj.value + value << endl;
    }
};

int main() {
    Number num1(10), num2(20);

    num1.display();
    num2.display();

    num1.addValue(num2);  // Passing object as argument
    return 0;
}