#include<iostream>
using namespace std;
class Vk{
    public:
    int a=10;
    void dis1(){
        cout<<"one"<<endl;
    }
};
class Vicky:public Vk{
    public:
    int b=1;
    void dis2(){
        cout<<"two"<<endl;
    }
};
int main(){
    Vicky r;
    r.dis1();
    r.dis2();
}