#include<iostream>
class Rectangle{

public:
int length;int breadth;
int area(){
    return length*breadth;
}
int perimeter(){
    return 2*(length+breadth);
}

};

int main(){
    
// Rectangle r1; // using pointers on objects i.e., r1 object of class Rectangle
// Rectangle *ptr=&r1;
//instead of crating an object directly lets try to create in heap
Rectangle *ptr=new Rectangle();
ptr->length=10;
ptr->breadth=5;
std::cout<<ptr->area()<<std::endl;
std::cout<<ptr->perimeter()<<std::endl;

//same result
//50
//30

}