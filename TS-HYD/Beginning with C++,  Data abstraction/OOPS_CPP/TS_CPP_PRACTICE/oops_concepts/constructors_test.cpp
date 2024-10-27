#include<iostream>
class Employee{
    private:
    int AccountNumber;
    double balance;
    public:
    Employee(int Accno, double bal){
        this->AccountNumber=Accno;
        this->balance=bal;
    }
    void deposit(double amount){
        if(amount>0){
        balance+=amount;
        std::cout<<"balance : "<<balance<<std::endl;}
        else{std::cout<<"invalid"<<std::endl;}
        
       
    }
     double GetBalance()
    { return balance;}
};

int main(){
 Employee s(116,2000);
 s.deposit(100);
 std::cout<< s.GetBalance()<<" is final balance"<<std::endl;

}
