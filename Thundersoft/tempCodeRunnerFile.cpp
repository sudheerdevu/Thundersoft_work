#include <iostream>
using namespace std;
class add{
    public:
    int num1;int num2;
    add(int n1, int n2){
        num1=n1;
        num2= n2;
    }
    int addfunc(){
        return num1+num2;
    }
};
int main(){
    add obj1(1,2);
    int result = obj1.addfunc();
    cout<<add.addfunc()<<endl;
    return 0;
}
