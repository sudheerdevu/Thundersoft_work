#include<iostream>

class Person{

private:
    std::string first;
    std::string last;
public:
    void setFullName(std::string first){this->first=first;}
    void setLastName(std::string last){this->last=last;}
    std::string getName(){
        return first+" "+last;
    }
    void printName(){std::cout<<first<<" "<<last<<std::endl;}
};

int main(){
    Person p;
    p.setFullName("Sudheer");
    p.setLastName("Devu");
    p.printName();
    std::cout<<p.getName()<<std::endl;
}
