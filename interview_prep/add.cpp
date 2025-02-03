#include<iostream>
using namespace std;

class add{
private :
int num1,num2;
public:

add(){cout<<" "<<endl;}
add(int a,int b):num1(a),num2(b){}
int addf(){
    return num1+num2;
}
void display(){
    cout<<addf()<<endl;
}
};

int main(){
    int a,b;
    cin>>a>>b;
    add addition(a,b);
    addition.display();
    return 0;
}