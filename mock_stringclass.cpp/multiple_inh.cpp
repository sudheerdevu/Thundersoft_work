#include<iostream>
using namespace std;

class A{
    public:
    void funa(){
        cout<<"class a "<<endl;
    }
};

class B{
    public:
    void funb(){
        cout<<"class b"<<endl;
    }
};

class C: public A, public B{
    public:
    void func(){
        cout<<"class c"<<endl;
    }
};

int main(){
    C obj;
    obj.funa();
    obj.funb();
    obj.func();
    return 0;
}