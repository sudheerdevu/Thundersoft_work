#include <iostream>
class Complex {
private:
    int real;
    int img;

public:
    //Complex(int r = 0, int i = 0) : real(r), img(i) {}

    Complex(int r=0,int i=0){
        real=r;img=i;
    }

    void display() {
        std::cout << real << "+i" << img << std::endl;
    }

    friend Complex operator+(Complex c1, Complex c2);
};

Complex operator+(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main() {
    Complex c1(5, 3), c2(2, 3), c3;
    //c3 = c1 + c2;
    c3=operator+(c1,c2);
    c3.display();
    return 0;
}



/*
Using a friend function in the above code provides several benefits:

	1.	Access to Private Members:
	•	The friend function operator+ can directly access the private members (real and img) of the Complex class. This is beneficial since it allows operator+ to perform arithmetic operations on these private members without requiring additional accessor functions.
	2.	Operator Overloading Outside the Class:
	•	Since operator+ is a friend function, it’s defined outside the class but still has access to its private members. This improves readability, as overloaded operators are sometimes more clearly understood when defined outside the class, especially for binary operators.
	3.	Flexibility with Different Argument Types:
	•	As a friend function, operator+ can take parameters of different types or even non-member objects (e.g., mixing Complex and int). If defined as a member function, the left operand would need to be a Complex object, but friend allows more flexible usage.
	4.	Encapsulation and Security:
	•	Although friend functions have access to private members, they are not class members themselves. This means you can keep the private members hidden from general access, exposing them only to specific trusted functions. This maintains encapsulation, as only specific functions can access or modify private data directly.
	5.	Consistent Syntax for Operator Overloading:
	•	Using friend functions allows the syntax c1 + c2, which is consistent with regular arithmetic operations. This makes the code more intuitive for users of the class since it resembles built-in type operations.

These benefits make the friend function approach suitable when overloading operators that work with multiple class instances or when access to private members is necessary without compromising encapsulation principles.
*/