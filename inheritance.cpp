#include<iostream>
using namespace std;

class A {
public:
    string name;
    A(string n) : name(n) {} 
};

class B : public A {
public:
    string name;
    int age; 
    B(string n, int a) : A(n), name(n), age(a) {}
};


int main() {
    A obj1("sudheer");
    B obj2("vivek", 25);

    cout << "Obj1 name: " << obj1.name << endl;
    cout << "Obj2 name: " << obj2.name << "age: " << obj2.age << endl;

    return 0;
}

