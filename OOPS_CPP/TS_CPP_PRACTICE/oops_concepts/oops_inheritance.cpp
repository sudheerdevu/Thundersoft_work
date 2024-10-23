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
    void setFullName(std::string first){this->first=first;}
    void setLastName(std::string last){this->last=last;}
    std::string getName(){
      return first+" "+last;
    }
    void printName(){std::cout<<first<<" "<<last<<std::endl;}
};

class Employee : public Person {
public:
    
    Employee(std::string first, std::string last) : Person(first, last) {}

    
    void setEmployeeName(std::string first, std::string last) {
        setFullName(first);  
        setLastName(last);
    }

    std::string getEmployeeName() {
        return getName();  
    }
};

int main(){
    Person s("sudheer","devu");
    Person v("vivek","devu");

    s.setFullName("Sudheer");
    s.setLastName("Devu");
    s.printName();
    v.printName();

    std::cout<<v.getName()<<std::endl;

    Employee e("John", "Doe");
    e.printName();  

    e.setEmployeeName("Jane", "Smith");
    std::cout << e.getEmployeeName() << std::endl;  

    return 0;
}
