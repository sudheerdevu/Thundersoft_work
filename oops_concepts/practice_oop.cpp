#include<iostream>
class Student{
private:
int roll; std::string name;
int math;int phy;int chem;
public:
Student(int r,std::string n,int m,int p,int c){
    roll=r; name=n; math=m; phy=p;chem=c;
}
int Total(){
    return math+phy+chem;
}
std::string Grade(){
    float avg=Total()/3;
    if(avg>60) 
        return "grade-A";
    else if(avg>=40 && avg<=60)
        return "grade-b";
    else
        return "grade-c";
}

};

int main(){
    int roll;std::cout<<"roll-no:"<<std::endl;std::cin>>roll;
    std::string name;std::cout<<"enter name"<<std::endl;std::cin>>name;
    int m,p,c;std::cin>>m>>p>>c;
    Student s(roll,name,m,p,c);
    std::cout<<s.Total()<<std::endl;
    std::cout<<s.Grade()<<std::endl;
}