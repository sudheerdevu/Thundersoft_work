#include<iostream>
#include<cstring>

using namespace std;
 class simple{
    int* data;

public:
    simple(int value): data(new int(value)){
        cout<<"constructor called"<<*data<<endl;
    }

    ~simple(){
        if(data) delete data;
        cout<<"Destructor called"<<endl;
    }

    simple(simple&& other){
        data = other.data;
        other.data = nullptr;
        cout<<"move constructor"<<endl;
    }

    simple(const simple& other){
        data = other.data;
        cout<<"copy constructor called"<<endl;
    }

 };

 int main(){
    simple obj1(20);
    simple obj2=move(obj1);
    simple obj3(simple(50));
    return 0;
 }