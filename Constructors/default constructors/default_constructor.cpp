#include <iostream>

class Person{

public:
Person(){
std::cout<<"default constructor"<<std::endl;
name="unknown"; age=0;
}

std::string getName() const {
    return name;
}
 
int getAge() const {
    return age;
}


private:
std::string name; int age;

};

int main(){
    Person p;
    std::cout<<p.getName()<<" and "<<p.getAge()<<std::endl;

}
