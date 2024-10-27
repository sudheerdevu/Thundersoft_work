#include<iostream>

/*
void PointerArith()
{
    int A[]={2,4,6,8,10,12};
    int *p=A;
    
    p++;// move pointer to next location to print 4
    cout<<*p;
    
    p=p+3; // pointer will be pointing on 10
    
    cout<<  p[-4] ; // complete this statement to print 2 without moving pointer;
}

*/
int main(){
    int sudheer[5]= {2,3,4,5,6};
    int *p=sudheer;
    std::cout<<*p<<std::endl;

    p++;std::cout<<*p<<std::endl;
    return 0;
    
}

