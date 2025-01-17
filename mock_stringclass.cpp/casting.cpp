#include<iostream>
using namespace std;
class base{
    public:
    virtual void display(){
        cout<<"base class"<<endl;
    }
};
class derived : public base{
    
};