#include<iostream> 
#include<vector> 
#include<string>
class Person{
    protected:
    std::string first;
    std::string last;
    public:
    Person(std::string first, std::string last):first(first),last(last) {}
   
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
        
        std::cout<<"name: "<<getName()<<std::endl;
        std::cout<<"department: "<<department<<std::endl;
    }
};


int main(){
    std::vector<Person*> people;
    Person q("sudheer","devu");
    Employee p("sudheer","vivek","cse");
    people.push_back(&q);
    people.push_back(&p);
    for(auto person:people){
        person->Printinfo();
    }
}


