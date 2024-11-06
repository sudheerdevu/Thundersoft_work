#include<iostream>
using namespace std;

class Sudheer{
private:
    int variable;
public:
    Sudheer(int v): variable(v){cout<<variable<<endl;}
    Sudheer(const Sudheer &v){
        this->variable=v.variable;cout<<variable<<endl;
    }
    void display()const{
        cout<<variable<<endl;
    }
};

int main(){
    Sudheer vk(10);
    Sudheer ds=vk;
    vk.display();ds.display();
    return 0;
}