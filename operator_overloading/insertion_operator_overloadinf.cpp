#include<iostream>
using namespace std;
class Complex{
private:
int real,img;
public:
Complex(int r=0,int i=0){
    real=r;img=i;
}
void display(){
    std::cout<<real<<"+i"<<img<<std::endl;
}
friend ostream& operator<<(ostream &o,Complex &c);
};
ostream& operator<<(ostream &o,Complex &c){
    o<<c.real<<"+i"<<c.img<<endl;
    return o;
}

int main(){
    Complex c(10,5);
    cout<<c<<endl;//writing this statement is similar to this one
 //operator<<(cout,c);
}
