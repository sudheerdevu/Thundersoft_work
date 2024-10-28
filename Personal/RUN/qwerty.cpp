/*#include <iostream>

int main()
{
    int x { 5 };
    ++x; // This expression statement has the side-effect of incrementing x
    std::cout << x << '\n'; // prints 6

    return 0;
}
*/

#include <stdio.h>
extern int add(int, int);
int main() {
    int a = 10, b = 5, c;
    c = add(a, b); 
    printf("result is: %d\n",  c); 
    return 0; 
}
int add(int x, int y)
{
    return (x+y);
}


