#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int id;
public:
    void setdetails(string &n, int i){
    name=n;
    id=i;
}
    string getname(){return name;}
    int getid(){return id;}
};



class Manager:public Employee{
    private:
        string department;
        int teamsize;
    public: 
       void setmdetails(string &d, int t){
            department=d;
            teamsize=t;
        } 
        void display(){
            cout<<name<<id<<department<<teamsize<<endl;
        }
};

int main(){
    Manager m;
    m.setdetails("vivek",420);
    m.setmdetails("cse",2);
    m.display();
    return 0;
}

