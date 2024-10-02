#include<iostream>
int main(){

int a=10;
int *p=&a;
std::cout<<a<<std::endl;
std::cout<<&a<<std::endl;
std::cout<<p<<std::endl;//it will have address of a 
std::cout<<&p<<std::endl;//p is variable and it stores some address 
std::cout<<*p<<std::endl;//p pointing to a and a have value 10

}