#include<iostream>
class Complex{
    private:
    int real;int img;
    public:
    Complex(int r=0,int i=0){
        real=r;img=i;
    }
    void display(){
        std::cout<<real<<"+i"<<img<<std::endl;
    }
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