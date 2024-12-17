#include <iostream>
using namespace std;

template<typename T>
class DynamicArray {
private:
    T* data;
    size_t size;

public:
    DynamicArray(size_t n) : size(n) {
        data = new T[size];
    }

    ~DynamicArray() {
        delete[] data;
    }

    T& operator[](size_t index) {
        return data[index];
    }

    void display() {
        for (size_t i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    DynamicArray<int> arr(5);
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
    }

    cout << "Custom dynamic array elements: ";
    arr.display();
    return 0;
}