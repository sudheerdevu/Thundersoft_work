#include<iostream>
int main()
{
    int a[5]={2,3,4,5,6};
    int *p=a;
    
    for(int i=0;i<5;i++)
    {
    std::cout<<a+i<<std::endl;//array..
    std::cout<<p+i<<std::endl;//pointer variable..
    std::cout<< *(p+i) <<std::endl;
    }

    /*
    for(int i:a)
    std::cout<<i<<std::endl;
    */
}   