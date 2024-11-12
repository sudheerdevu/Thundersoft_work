#include<iostream>
using namespace std;
class Copy{
 int data;
 public:
  Copy(int v):data(v){}
   Copy(const Copy &v){
        data=v.data;
        //cout <<"value: "<< data<<endl;
    }
  void fetdata()const{
    cout<<data;
    
  }
};
int main(){
    Copy c(3);
    Copy c1=c;
    c1.fetdata();
}
