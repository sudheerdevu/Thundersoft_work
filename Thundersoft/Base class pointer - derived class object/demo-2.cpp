#include<iostream>
using namespace std;

class Rectangle{
    public:
    void area(){
        cout<<"sudheer baseclass "<<endl;
    }
};
class Cuboid: public Rectangle{
    public:
    void volume(){
        cout<<"sudheer derived class "<<endl;
    }
};

int main(){
    Cuboid c;
    Rectangle *p=&c;
    p->area();
    p->volume();
    return 0;
}