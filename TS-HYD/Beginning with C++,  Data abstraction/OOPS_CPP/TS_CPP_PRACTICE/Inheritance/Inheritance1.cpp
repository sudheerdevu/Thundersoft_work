#include<iostream>
class Base{
    public:
    int a;
    void Display(){
        std::cout<<"sudheer is great"<<std::endl;
    }
};
class Derived:public Base{
    void Show(){
        std::cout<<"derived"<<std::endl;
    }
};
int main(){
    Base b;Derived d;
    b.Display();d.Display();d.Show();
}