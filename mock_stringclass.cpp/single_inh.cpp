#include<iostream>
using namespace std;

class Base{
    public:
    void display(){
        cout<<"base class "<<endl;
    }
};

class Derived: public Base{
    public :
    void show(){
        cout<<"derived class"<<endl;
    }
};

int main(){
    Derived obj;
    obj.display();
    obj.show();
    return 0;
}