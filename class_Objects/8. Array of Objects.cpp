#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
public:
    void setRollNo(int r) {
        rollNo = r;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student students[3];  // Array of objects

    for (int i = 0; i < 3; i++) {
        students[i].setRollNo(i + 1);
    }

    for (int i = 0; i < 3; i++) {
        students[i].display();
    }

    return 0;
}