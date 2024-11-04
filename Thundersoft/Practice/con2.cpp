#include<iostream>
using namespace std;
class sudheer{
    private:
    string acholder;int balance;
    public:

    sudheer(string name,int bal){
        this->acholder=name;
        if(bal>0){
            this->balance=bal;
        }else{
            this->balance=5;
        }
        
    }

    string getacholder(){
        return acholder;
    }
    int getbalance(){
        return balance;
    }
    void setholder(string newholder){
        this->acholder=newholder;
    }
};

int main(){
    sudheer obj("success",3);
    //obj.setholder("s");
    cout<<obj.getacholder()<<endl;
    cout<<obj.getbalance()<<endl;


}
