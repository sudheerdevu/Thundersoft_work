#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Constructor to initialize student details
    Student(string n = "", int a = 0) : name(n), age(a) {}

    // Method to display student information
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Declare an array of 3 Student objects
    Student students[3] = { 
        Student("Alice", 20), 
        Student("Bob", 21), 
        Student("Charlie", 19) 
    };

    // Display details of each student
    for (int i = 0; i < 3; ++i) {
        students[i].display();
    }

    return 0;
}