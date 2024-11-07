#include <iostream>
using namespace std;

class MyClass {
private:
    int* value;

public:
    MyClass(int val) {
        value = new int(val);
        cout << "Constructor called" << *value << endl;
    }

    MyClass(const MyClass& obj) {
        value = new int(*obj.value); 
        cout << "Copy Constructor:" << *value << endl;
    }
 
    MyClass& operator=(const MyClass& obj) {
        if (this != &obj) { 
            delete value; 
            value = new int(*obj.value); 
        }
        else{
            
        }
        cout << "Assignment Operator::" << *value << endl;
        return *this;
    }

    int getValue() const {
        return *value;
    }
};

int main() {
    MyClass obj1(10);         
    MyClass obj2 = obj1;   //copy constructor   
    MyClass obj3(obj2);  //copy constructor       
    MyClass obj4(20);
    obj3=obj4;
    //   //assignment operator         

    cout << obj1.getValue() << endl;
    cout << obj2.getValue() << endl;
    cout << obj3.getValue() << endl;
    cout << obj4.getValue() << endl;
    return 0;
}



    A obj1("sudheer");
    B *obj2 = new B("vivek", 25);

    cout << "Obj1 name: " << obj1.name << endl;
    cout << "Obj2 name: " << obj2->name << " age: " << obj2->age << endl;

    
    delete obj2;

    return 0;