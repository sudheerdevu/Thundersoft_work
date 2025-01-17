#include<iostream>
#include<cstring>
using namespace std;
class string{
    private:
    char* data;
    size_t length;
    
    public:
    string(): data(nullptr), length(0) {} 

    string(const char* str){
        if(str){
            length= strlen(str);
            data = new char[length +1];
            strcpy(data,str);
        }
        else{
            data= nullptr;
            length =0;
        }
    }

    string(const string& other){
        length = other.length;
        if(other.data){
            data = new char[length + 1];
            strcpy(data, other.data);
        }
        else{
            data=nullptr;
        }
    }

    string(string&& other) noexpect:
    data(other.data), length(other.lenght){
        other.data=nullptr;
        other.length =0;
    }

    string& operator=(const string& other){
        if(this==&other){
            return *this;
        }
        delete[] data;

        if(other.data){
            data=new char[length +1];
            strcpy(data, other.data);
        }
        else{
            data= nullptr;
        }
        return *this;
    }

    //no expect - declare whether a function can throw exceptions

    string& operator=(string&& other)noexpect{
        if(this==&other){
            return *this;
        }
        delete[] data;
        data = other.data;
        length=other.length;

        other.data = nullptr;
        other.length=0;
        
        return *this;
    }

    ~string(){
        delete[] data;
    }

    const char* get() const{
        return data ? data : "";
    }

    size_t size()const{
        return length;
    }

    string operator+(const string& other) const{
        size_t newlength= length +other.length;
        char* newdata= new char[newlength +1];
        strcpy(newdata, data?data: " ");
        strcat(newdata, other.data ? other.data: " ");

        string result(newdata);
        delete[] newdata;
        return result;
    }

    friend std::ostream& operator<<(std::ostream& os,const string& str){
        os<<str.get();
        return os;
    }
/*
inheritance
    tempklate class 
    tempkate function
    stl   
    function overloading 
    function overriding
    4 types - casting*/
    


};


    int main(){
        string s1("hello");
        string s2("world");
        string s3= s1+s2;

        std::cout<<"s1 is"<<s1<<endl;
        std::cout<<"s2 is"<<s2<<endl;
        std::cout<<"s3 is"<<s3<<endl;
        s3=s1; //assignmnet operator
        std::cout<<"after assignmnet-s3:"<<s3<<endl;
        string s3= std::move(s2);//move constructor
        std::cout<<"after move, s4"<<s4<<endl;
        return 0;

    }