/*

    tempklate class 
    tempkate function
    stl   
    function overloading 
    function overriding
    4 types - casting*/
    


#include<iostream>
using namespace std;
class a{
    public:
    void funa(){
        cout<<"class a"<<endl;
    }
};
class b:virtual public a{
    public:
    void funb(){
        cout<<"class b"<<endl;
    }
};
class c:virtual public a{
    public:
    void func(){
        cout<<"class c"<<endl;
    }
};
class d: public b, public c{
    public:
    void fund(){
        cout<<"class d"<<endl;
    }
};
int main(){
    d obj;
    obj.funa();
    obj.funb();
    obj.func();
    obj.fund();
    return 0;
}