#include <iostream>
#include <string>

class Person{
public:
    std::string first; std::string last;
    void printFullname() {std::cout<<first<<" "<<last<<std::endl;}
};

int main(){

    Person v;
    v.first="vivek";v.last="devu";v.printFullname();

    Person p;
    p.first="Sudheer";p.last="Devu";p.printFullname();

    return 0;

}




