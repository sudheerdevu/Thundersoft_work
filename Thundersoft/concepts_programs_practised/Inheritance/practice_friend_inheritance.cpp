#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int id;
public:
    friend void setdetails(Employee &e,const string &n, int i);
    string getname(){return name;}
    int getid(){return id;}
};
void setdetails(Employee &e,const string &n, int i){
        e.name=n;
        e.id=i;
}



class Manager:public Employee{
    private:
        string department;
        int teamsize;
    public: 
       friend void setmdetails(Manager &m,const string &d, int t);
        void display(){
            cout<<name<<id<<department<<teamsize<<endl;
        }
};
void setmdetails(Manager &m,const string &d, int t){
            m.department=d;
            m.teamsize=t;
        } 

int main(){
    Manager m;
    setdetails(m,"vivek",420);
    setmdetails(m,"cse",2);
    m.display();
    return 0;
}

