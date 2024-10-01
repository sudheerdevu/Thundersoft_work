#include<iostream>

class Person{

private:
std::string name;int age;

public:
//getter
std::string getName()const{
    return name;
}
//getter
int getAge()const{
    return age;
}

Person(){
    name="sudheer";age=10;
}

};

int main(){
    Person Devu;
    std::cout<<"age is:"<<Devu.getAge()<< " name is:"<<Devu.getName()<<std::endl;
}