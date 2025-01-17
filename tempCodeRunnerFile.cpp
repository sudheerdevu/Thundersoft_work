#include <iostream> 
void modify(int* x) { 
    *x = 20;  // Modify through non-const pointer 
} 
 
int main() { 
    const int a = 10;  // Const variable 
    modify(const_cast<int*>(&a));  // Remove const qualifier 
    std::cout << "a: " << a << std::endl;  // Undefined behavior! 
    return 0; 
} 