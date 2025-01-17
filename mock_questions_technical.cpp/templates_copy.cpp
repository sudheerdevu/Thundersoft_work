#include<iostream>
#include<string>
using namespace std;

template <typename T>
T add(T a, T b){
    return a+b;
}

int main(){
    cout<<"addition of integer"<<add(5,10)<<endl;
    cout<<"addition of doubles"<<add(5.5,2.3)<<endl;
    cout<<"addition of char:"<<add(string("cpp "), string("mock"))<<endl;
    return 0;
}