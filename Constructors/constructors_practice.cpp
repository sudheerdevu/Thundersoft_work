
#include<iostream>
class Rectangle{
    private:
    int length;int breadth;
    public:
    Rectangle(){                    // default constructor
        length=1;breadth=1;
    }
    Rectangle(int l,int b){                    // parameterized constructor
        setLength(l);setBreadth(b);
    }



    void setLength(int l){
        if(l>0)
        length=l;
        else
        length=1;
    }
    void setBreadth(int b){
        if(b>0)
        breadth=b;
        else
        breadth=1;
    }
    int getLength(){return length;}
    int getBreadth(){return breadth;}
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    Rectangle r1(10,5);
    std::cout<<r1.area()<<std::endl;


}