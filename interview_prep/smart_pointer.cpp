#include<iostream>
using namespace std;

class Smartpointer{
    private:
    int *data;
    public:
        explicit Smartpointer(int *p = nullptr){
            data = p;
        }
        ~Smartpointer(){
            delete data;
        }
        int& operator*(){
            return *data;
        }
};

int main(){
    int *p = new int(10);
    Smartpointer sp= Smartpointer(p);
    cout<< *(sp) <<endl;
    return 0;   
}