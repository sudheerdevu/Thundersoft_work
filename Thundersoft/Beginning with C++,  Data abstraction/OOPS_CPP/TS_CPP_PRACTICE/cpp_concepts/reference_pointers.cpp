/*
alias..

*/

#include<iostream>
int main(){
int x=10;
int &y=x;//declaration of reference variable requires initialization...and reference of a variable cannot be changed...
std::cout<<x<<std::endl;
y++;x++;
std::cout<<x<<std::endl;
std::cout<<&x<<std::endl;
std::cout<<&y<<std::endl;
}