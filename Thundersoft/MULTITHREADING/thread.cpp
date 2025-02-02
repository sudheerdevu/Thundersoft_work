#include<iostream>
#include<thread>
#include<chrono>
#include<algorithm>
using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;

ull oddsum = 0;
ull evensum = 0;

void even(ull start , ull end){
    
    for(ull i=start ; i<=end ; ++i){
        if((i&1)==0){
            evensum+=i;
        }
    }
}

void odd(ull start , ull end){
    
    for(ull i=start ; i<=end ; ++i){
        if((i&1)==1){
            oddsum+=i;
        }
    }
}

int main(){
    ull start =0, end= 19000000;
    even(start, end);
    odd(start, end);
    cout<<"odd"<<oddsum<<endl;
    cout<<"even"<<evensum<<endl;

    return 0;
}