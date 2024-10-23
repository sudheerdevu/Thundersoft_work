#include<iostream>

class Person{

private:
    std::string first;
    std::string last;
public:
    //one type of constructor declarations
    //Person(std::string first,std::string last): first(first),last(last){}

    //second type of constructors declarations
    Person(std::string first,std::string last){
        this->first=first;  
        this->last=last;
    }
    Person()=default;
    //void setFullName(std::string first){this->first=first;}
    //void setLastName(std::string last){this->last=last;}
    //std::string getName(){
    //  return first+" "+last;
    //}
    void printName(){std::cout<<first<<" "<<last<<std::endl;}
};

int main(){
    Person s("sudheer","devu");
    Person v("vivek","devu");

    //p.setFullName("Sudheer");
    //p.setLastName("Devu");
    s.printName();
    v.printName();
    //std::cout<<p.getName()<<std::endl;
}
