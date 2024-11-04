#include<iostream>
class Complex{
    public:
    int real;int img;
    Complex operator+(Complex c){
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
};
int main(){
    Complex c1,c2,c3;
    c1.real=5;c1.img=3;
    c2.real=3;c2.img=2;
    //c3=c1.add(c2);
    c3=c1+c2;
    std::cout<<c3.real<<"+i"<<c3.img<<std::endl;
}