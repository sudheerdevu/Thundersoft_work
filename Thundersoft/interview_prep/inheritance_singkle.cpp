#include<iostream>
using namespace std;
class S{
    public:
    void s(){
        cout<<"sudheer"<<endl;

    }
};    

class V : public S{
    public:
    void v(){
        cout<<"vivek"<<endl;

    }
};
int main(){
 V vivek;
 vivek.v();
 vivek.s();
}
