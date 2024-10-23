#include<iostream>

class integer{
    int m,n;
    public:
    integer(int x,int y): m(x),n(y){}
    integer()=default;
    void display(void){
        std::cout<<"m = "<< m <<std::endl;
        std::cout<<"n = "<< n <<std::endl;
        std::cout<<"----------------"<<std::endl;
    }
};

int main(){

    integer sudheer(0,100);
    integer vivek = integer(25,75);
    sudheer.display();
    vivek.display();

}