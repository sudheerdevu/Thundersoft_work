#include<iostream>
using namespace std;

void sudheer(int &r){r+=5;}
int main(){
    int i=0;
    int &ri=i;
    cout<<i<<endl;
    cout<<ri<<endl;

    sudheer(ri);

    cout<<i<<endl;
    cout<<ri<<endl;
    return 0;
}

//reference cannnot be null
//cant be reassigned to any variable
//cant do math wih these reference
//cant use reference to reference
