//accessors
//mutators

//property functions
//according to the policy of oops the data class must be hidden

#include<iostream>
class Rectangle{

private:
int length;int breadth;

public:
void setLength(int l){
    if(l<0)
    length=1;      
    else
    length=l;         //setters
}
void setBreadth(int b){
    if(b<0)
    breadth=1;         
    else
    breadth=b;     //setters
}
int getLength(){
    return length;          //getters
}
int getBreadth(){
    return breadth;         //getters
}

int area(){
    return length*breadth;
}
int perimeter(){    
    return 2*(length+breadth);
}

};

int main(){
    
Rectangle r1;
r1.setLength(-2);
r1.setBreadth(2);
std::cout<<r1.area();

// Rectangle *ptr=&r1;
//instead of crating an object directly lets try to create in heap


//Rectangle *ptr=new Rectangle();
//ptr->length=10;
//ptr->breadth=5;
//std::cout<<ptr->area()<<std::endl;
//std::cout<<ptr->perimeter()<<std::endl;

//same result
//50
//30

}