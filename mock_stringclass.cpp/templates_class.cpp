#include<iostream>
using namespace std;

template <typename T>
class calc{
    private:
    T num1,num2;
    public:
    calc(T a,T b): num1(a), num2(b){}
    T add(){
        return num1+num2;
    }
    T sub(){
        return num1-num2;
    }
};

int main(){
    calc<int> cal(10,5);
    cout<<cal.add()<<endl;
    cout<<cal.sub()<<endl;
    return 0;
}