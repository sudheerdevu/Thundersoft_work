#include<iostream>

class Array{

public:
Array(){
    size=10;
    data=new int[size];
    std::cout<<size<<std::endl;
}
~Array(){
    delete[] data;
    std::cout<<"deleted"<<std::endl;
}

private:

int *data;
int size;

};

int main(){
    Array a;
}