#include<iostream>
int main(){
int x = 10;int y;
int* const ptr = &x;  // Constant pointer to integer

*ptr = 20;  // OK: The value at the address can be modified
//ptr = &y;   // Error: ptr itself cannot point to another address
}

