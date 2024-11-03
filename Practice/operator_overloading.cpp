#include<iostream>
using namespace std;
class Complex{
    private:
    int real;int img;
    public:
    Complex(int r=0,int i=0): real(r),img(i) {}

    Complex operator+(Complex x){
        Complex result;
        result.real = real+ x.real;
        result.img = img+ x.img;
        return result;
    }

    void display()const{
        cout<<real<<"+"<<img<<endl;
    }
};

int main(){
    Complex c1(2,3);
    Complex c2(1,1);
    Complex c3 = c1+c2;
    c3.display();

}