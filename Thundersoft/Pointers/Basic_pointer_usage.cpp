/*
#include <iostream>

int main() {
    int x = 10;         // Regular integer
    int* ptr = &x;      // Pointer to integer, initialized to the address of x

    // Output the address and value
    std::cout << "Address of x: " << ptr << std::endl;
    std::cout << "Value of x via pointer: " << *ptr << std::endl;

    // Modify the value through the pointer
    *ptr = 20;
    std::cout << "New value of x: " << x << std::endl;

    return 0;
}

*/

#include<stdio.h>
int main(){
    int a=10,b=20,c;
    int *p ,*q;
    p = &a;
    q = &b;
    c = *q;
    printf("%d",c);
    

}

/*
Your code works as expected and outputs the value of b, which is 20. Here’s a breakdown of how it works:

	1.	Variable Initialization:
	•	int a = 10, b = 20, c; declares three integer variables a, b, and c. a is set to 10, and b is set to 20.
	2.	Pointer Initialization:
	•	int *p, *q; declares two integer pointers p and q.
	3.	Pointer Assignment:
	•	p = &a; assigns the address of a to pointer p.
	•	q = &b; assigns the address of b to pointer q.
	4.	Dereferencing Pointer:
	•	c = *q; assigns the value at the address stored in q (which is the value of b, or 20) to c.
	5.	Output:
	•	printf("%d", c); prints the value of c, which is 20.

So, when you run this code, it will display:

20

Let me know if you need any further explanation!
*/