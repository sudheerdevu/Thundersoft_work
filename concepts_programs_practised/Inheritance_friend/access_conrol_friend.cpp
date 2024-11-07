#include<iostream>
using namespace std;
class Sudheer{
    private:
        int privatevar;
    protected:
        int protectedvar;
    public:
    Sudheer():privatevar(10),protectedvar(20){}
    friend void getdetails(Sudheer &s);
};

void getdetails(Sudheer &s){
    cout<<"private:"<<s.privatevar<<endl;
    cout<<"protected:"<<s.protectedvar<<endl;
}

int main(){
    Sudheer s;
    getdetails(s);
}