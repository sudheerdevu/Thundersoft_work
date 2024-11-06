#include<iostream>
using namespace std;
class Bankaccount{
    private:
        int accountnumber;
        float balance;
        string accountholdername;
    public:
        Bankaccount(int a,string n,int b=0):accountnumber(a), balance(b), accountholdername(n) {}
        inline void deposit(float amount){balance+=amount;}
        inline void withdraw(float amount){
           if(balance>=amount){balance-=amount;}
            else{cout<<"insufficient balance"<<endl;}
        }
        inline void display(){
            cout<<balance<<endl;
        }
};
int main(){
    Bankaccount bank(1,"vivek");
    bank.deposit(100);
    bank.withdraw(50);
    bank.withdraw(51);
    bank.display();
    return 0;
}
