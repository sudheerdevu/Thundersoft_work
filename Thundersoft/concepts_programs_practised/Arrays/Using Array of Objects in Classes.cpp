#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string n = "", int a = 0) : name(n), age(a) {}

    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Classroom {
private:
    Student students[3];  // Array of 3 Student objects

public:
    Classroom() {
        // Initialize the array of students
        students[0] = Student("Alice", 20);
        students[1] = Student("Bob", 21);
        students[2] = Student("Charlie", 19);
    }

    void showClassroom() const {
        for (int i = 0; i < 3; ++i) {
            students[i].display();
        }
    }
};

int main() {
    Classroom classroom;
    classroom.showClassroom();

    return 0;
}