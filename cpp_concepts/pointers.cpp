
/*

#include<iostream>
int main(){

int a=10;
int *p=&a;
std::cout<<a<<std::endl;
std::cout<<&a<<std::endl;
std::cout<<p<<std::endl;//it will have address of a 
std::cout<<&p<<std::endl;//p is variable and it stores some address 
std::cout<<*p<<std::endl;//p pointing to a and a have value 10 - DEREFERENCING

}




#include<iostream>
int main(){
    int *p=new int[5];
    p[0]=15;p[1]=13;
    std::cout<<p[1]<<std::endl;
    delete []p;
    p=nullptr;
    return  0;


}

*/

#include<iostream>
int main(){

    int size;std::cout<<"enter:"<<std::endl;
    std::cin>>size;int a[size];
    std::cout<<sizeof a<<std::endl;
    __MAC_10_5 0;

    //20*4 bytes

    

}

/*
int main()
{
    int *p=new int[size];

    delete []p;
    p=new int[40];


    return 0;

}

 */

//having arrays in heap the main benfit is with help of pointer is 
//the pointer can be same but that pointer is pointing to any size of memory
//like one time 20 size and later on 40 and so on

//real time applications of this code :
/*
Object-oriented systems may use heap memory to manage objects whose lifetimes exceed the scope of the function or module where they are created.
Example: In a real-time customer management system, customer objects may be created and stored dynamically based on user input, and these objects may persist throughout the program’s lifetime until they are no longer needed.
*/