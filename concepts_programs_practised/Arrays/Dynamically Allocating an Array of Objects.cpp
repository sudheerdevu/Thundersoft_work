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

int main() {
    int numStudents;
    cout << "Enter number of students: ";
    cin >> numStudents;

    // Dynamically allocate an array of Student objects
    Student* students = new Student[numStudents];

    // Initialize students (you could take input here)
    students[0] = Student("Alice", 20);
    students[1] = Student("Bob", 21);

    // Display student information
    for (int i = 0; i < numStudents; ++i) {
        students[i].display();
    }

    // Deallocate the array
    delete[] students;

    return 0;
}