#include<iostream>
using namespace std;

class A {
    private:
    string name;
    void print(){
        cout<<"in class A:"<<name<<endl;
    }
    public:
    A(string n) : name(n) {} 
    
};

class B : public A {
public:
    string name;
    int age; 
    B(string n, int a) : A(n),name("sgug"), age(a) {
        cout<<this->name<<" "<<A::name<<" "<<B::name<<endl;
        print();
    }
};


int main() {
    A obj1("sudheer");
    B obj2("vivek", 25);
    obj1.print();// protected member be it member or function we cannot access through its own object 
    //cout << "Obj1 name: " << obj1.print() << endl;
    cout << "Obj2 name: " << obj2.name << "age: " << obj2.age << endl;

    return 0;
}

