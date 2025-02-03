#include <iostream>
#include <memory>

class Test {
public:
    Test() { std::cout << "Test Constructor\n"; }
    ~Test() { std::cout << "Test Destructor\n"; }
    void show() { std::cout << "Inside show()\n"; }
};

int main() {
    std::unique_ptr<Test> ptr1 = std::make_unique<Test>(); // Allocate memory
    ptr1->show();  // Accessing the object

    // std::unique_ptr<Test> ptr2 = ptr1;  // ❌ Error: unique_ptr cannot be copied
    std::unique_ptr<Test> ptr2 = std::move(ptr1);  // ✅ Allowed: Transfer ownership

    if (!ptr1) {
        std::cout << "ptr1 is now null\n";
    }
    return 0;
}