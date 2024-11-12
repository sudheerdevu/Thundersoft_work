#include<iostream>
using namespace std;
int main(){
int arr[3] = {1, 2, 3};
int* ptr = arr;  // Points to the first element of the array

for (int i = 0; i < 3; ++i) {
    cout << *(ptr + i) << " ";  // Access array elements using pointer arithmetic
}
}