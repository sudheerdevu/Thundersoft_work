#include<iostream>
#include<string>
using namespace std;
 class test{
       private:
       char* data;
       
       size_t length;

    public:
    void* operator new (size_t size){
        cout<<"custom operator"<<endl;
        void* ptr= ::operator new(size);
        return *ptr;
    }        

    test(const char* val){
        length =  strlen(val);
        value = new char[length+1];
        strcpy(value,val);
    }

    ~test(){
        delete[] value;
    }

    test operator+(const test& oth){
        size_t newl= length+oth.length;
        char* newvalue= new char[newl+1];
        strcpy(newvalue , value);
        strcat(newvalue, other.value);
    }

    friend ostream& operator<<(ostream& os,const test& obj){
        os<<obj.value;
        return os;
    }

    friend istream& operator>>(istream& is, test& obj){
        char vk[100];
        is>>vk;
        obj.length=strlen
    }
    
 };






operator overloading 
string class

 