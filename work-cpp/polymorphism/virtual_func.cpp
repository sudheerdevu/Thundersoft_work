#include<iostream>
using namespace std;
class car1{public: virtual void start(){ cout<<"one"<<endl;}};
class car2:public car1{public: void start(){ cout<<"two"<<endl;}};
int main(){
    car1 *p=new car2();
    p->start();
}