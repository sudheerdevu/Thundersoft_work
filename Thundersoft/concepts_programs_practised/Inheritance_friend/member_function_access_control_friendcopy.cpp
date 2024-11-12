#include<iostream>
using namespace std;
class Sudheer{
    private:
        int privatevar;
    protected:
        int protectedvar;
    public:
    Sudheer():privatevar(10),protectedvar(20){}

    void getprivate(){
        cout<<"private variable is:"<<privatevar<<endl;
    }
};
class Vivek: public Sudheer{
    public:
void getdetails(){
    getprivate();
    cout<<"protected:"<<protectedvar<<endl;
}
};

int main(){
    Sudheer s;
    Vivek v;
    v.getdetails();
}