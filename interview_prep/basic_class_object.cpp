/*Write a C++ program to create a class Student with private member variables name,
 rollNumber, and marks. Include member functions to set and get these values and display them.*/

 #include<iostream>
 using namespace std;
 class Student{
    private:
        string name;
        int rollnumber;
        int marks;
    public:
        Student(string n,int r,int m):name(n),rollnumber(r),marks(m){}
        void getdetails(){
            cout<<name<<" "<<rollnumber<<" "<<marks<<" "<<endl;
        }

 };
 int main(){
    Student s("sudheer",38,97);
    s.getdetails();
    
 }