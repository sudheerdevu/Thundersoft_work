#include<iostream>
using namespace std;

class base{
    public:
    virtual void vk(){
        cout<<"base class"<<endl;
    }
};
class derived: public base{
    public:
    void vk(){
        cout<<"derived class"<<endl;
    }
};
int main(){
    
    derived d;
    base *ptr=&d;
    ptr->vk();

}