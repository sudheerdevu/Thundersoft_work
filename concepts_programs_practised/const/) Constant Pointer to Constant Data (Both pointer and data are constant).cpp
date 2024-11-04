#include<iostream>
int main(){

int x = 10;int y;
const int* const ptr = &x;  // Constant pointer to constant integer

//*ptr = 20;  // Error: Cannot modify data through ptr
//ptr = &y;   // Error: Cannot change ptr to another address
}