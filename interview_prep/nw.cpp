#include <iostream>
using namespace std;
/*
int main() {
    // Using new to allocate a single integer
    int* singleValue = new int(42);
    cout << "Single Value: " << *singleValue << endl;

    // Using new to allocate an array
    int* arrayValues = new int[5]; // uninitialized
    for (int i = 0; i < 5; ++i) {
        arrayValues[i] = i * 10; // initialize each element
        cout << "Array Value at index " << i << ": " << arrayValues[i] << endl;
    }

    // Deallocate memory
    delete singleValue;       // single integer deletion
    delete[] arrayValues;      // array deletion

    return 0;
}

*/

class box;
class container{
    private:
        int height;
    public:
        container(int h):height(h){}
        friend int calculate(box &b, container &c);
};

class box{
    private:
    int width; int breadth;
    public:
    box(int w, int b):width(w),breadth(b){}
    friend int calculate(box &b, container &c);
};

int calculate(box &b, container &c){
    return b.width * b.breadth * c.height;
}

int main(){
    box b(2,3);container c(5);
    cout<<calculate(b,c)<<endl;
    return 0;
}