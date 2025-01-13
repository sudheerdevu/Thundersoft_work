#include<iostream>
using namespace std;

void reverse(int arr[], int len){
    for(int i=0; i<len/2; ++i){
        swap(arr[i], arr[len-i-1]);
    }
}

void findMinMax(int Arr[], int len, int &min, int &max) {
    min = Arr[0];
    max = Arr[0];

    for (int i = 1; i < len; ++i) {
        if (Arr[i] < min) {
            min = Arr[i];
        }
        if (Arr[i] > max) {
            max = Arr[i];
        }
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int len=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,len);
    int min,max;
    findMinMax(arr,len,min,max);

    cout<<min<<endl;
    cout<<max<<endl;

    for(int i=0;i<len;++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}
