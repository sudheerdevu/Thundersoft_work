#include<iostream>
    using namespace std;
    class Rectangle{
        private:
        int length;
        int breadth;
        public:
        // accessors and mutators start

        void setlength(int l){
            if(l>0)
             length=l;
            else
            length=0;
        }
        void setBreadth(int b){
            if(b>0)
             breadth=b;
            else
            breadth=0;
        }

        int getLength(){return length;}
        int getBreadth(){return breadth;}

        // accessors and mutators end.

        int area(){
            return length*breadth;
        }
        int perimeter(){return  2*(length+breadth);
        }
    };
int main(){
    Rectangle r1;
    r1.setlength(10);
    r1.setBreadth(5);

    cout<<"answer is: "<<endl;
    cout<<r1.area()<<endl;

}