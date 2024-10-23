#include <iostream>
using namespace std;

class Test {
private:
    int num;

public:
    void setNum(int n) {
        num = n;
    }

    void showNum() {
        display();  // Calling another member function
    }

private:
    void display() {
        cout << "Number is: " << num << endl;
    }
};

int main() {
    Test obj;
    obj.setNum(50);
    obj.showNum();  // Indirectly calls the private function `display()`
    return 0;
}