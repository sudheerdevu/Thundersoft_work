#include<iostream>
/*

class Demo{
    int x;int y;
    void display(){ std::cout<<"sudheer";}
};
int main(){
    Demo d;
    d.x;d.y;
    d.display();
}

*/


class Demo {
    int x;
    int y;
    
public:
    void setValues(int a, int b) {
        this->x = a;  // Using 'this' to access the member variable 'x'
        this->y = b;  // Using 'this' to access the member variable 'y'
    }

    void display() { 
        std::cout << "sudheer" << std::endl;
        std::cout << "x = " << this->x << ", y = " << this->y << std::endl;
    }
};

int main() {
    Demo d;
    d.setValues(10, 20);  // Set values for x and y
    d.display();          // Access the display function
}