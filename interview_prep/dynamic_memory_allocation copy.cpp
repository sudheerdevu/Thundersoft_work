#include<iostream>
using namespace std;
/*class numberholder{
    int* ptr;
    public:
    numberholder(int* p): ptr(p){}
    void display(){
        cout<<"value is: "<<*ptr<<endl;
    }
};
int main(){
    int value=100;
    numberholder vk(&value);
    vk.display();
    return 0;
}*/
class dynamicarray{
    int* arr;
    int size;
    public:
        dynamicarray(int s):size(s){
            arr =new int[size];
            for(int i=0;i<size;i++){
                arr[i]=i+1;
            }
        }
        void display(){
            for(int i=0;i<size<i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        ~dynamicarray(){
            delete[] arr;
        }
};
int main(){
    dynamicarray vk(3);
    vk.display();
    return 0;

}