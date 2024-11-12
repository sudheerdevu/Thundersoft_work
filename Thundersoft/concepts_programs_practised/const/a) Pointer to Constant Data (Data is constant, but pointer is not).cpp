#include<iostream>
int main(){
int x = 10;int y;
const int* ptr = &x;  // Pointer to constant integer

//*ptr = 20;  // Error: Cannot modify the data through ptr
ptr = &y;   // OK: ptr can be changed to point to another integer
}