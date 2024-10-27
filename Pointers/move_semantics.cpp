#include <iostream>
#include <utility>

class MyClass {
public:
    int* data;

    MyClass(int val) : data(new int(val)) {
        std::cout << "Constructed MyClass with value: " << *data << std::endl;
    }

    // Move constructor
    MyClass(MyClass&& other) noexcept : data(other.data) {
        other.data = nullptr;
        std::cout << "Move constructed MyClass" << std::endl;
    }

    ~MyClass() {
        delete data;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = std::move(obj1);  // Moves obj1 into obj2

    return 0;
}