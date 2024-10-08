#include<iostream>
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

};

int main(){
    Complex c(10,5);
    c.display();
}
