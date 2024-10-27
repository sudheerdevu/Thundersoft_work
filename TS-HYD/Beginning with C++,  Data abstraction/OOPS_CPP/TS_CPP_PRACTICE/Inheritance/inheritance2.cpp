#include<iostream>
class Person{
    protected:
    std::string first;
    std::string last;
    public:
    Person(std::string first, std::string last):first(first),last(last) {}
    //Person() = default;
    //setter method 
    void setname(std::string first, std::string last){
        this->first=first;
        this->last= last;
    }
    //gettr method
    std::string getName(){ return first + " "+ last;}
    void printfullname(){
        std::cout << first <<"."<<last<<std::endl;
    } 
    virtual void Printinfo(){
        std::cout << first<<" "<< last << std::endl;
    }
};

class Employee: public Person {
    std::string department;

    public:
    Employee(std::string first, std::string last, std::string department) : Person(first, last), department(department) {}
    
    std::string getdepartment() {
        return department;
    }

    void setdepartment(std::string department) {
        this->department = department;
    }
    void Printinfo() override{
        //std::cout << first << std::endl;
        std::cout<<"name: "<<getName()<<std::endl;
        std::cout<<"department: "<<department<<std::endl;
    }
};


int main(){
    Person q("sudheer","devu");
    q.Printinfo();
    
    //p.printfullname();
    //std::cout<<p.getName()<<std::endl;

    Employee p("sudheer","vivek","cse");
    //p.setname("vivek","Devu"); //basically we have not mentioned any acess specifiers so in default it takes private and when it is declared as private it is not possible to access the elements for a derived class
    //inorder to tackle this we must declare this as public so all members can be accessed from parent class
    // after declaring as public thr issue is resolved  
    //p1.setname("sudheer","vivek");
    
    //p.printfullname();
    //std::cout<<p.getdepartment()<<std::endl;
    p.Printinfo();
}


