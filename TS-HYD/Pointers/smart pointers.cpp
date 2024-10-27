#include <iostream>
#include <memory>

int main() {
    // Unique Pointer
    std::unique_ptr<int> uptr = std::make_unique<int>(10);
    std::cout << "Value using unique_ptr: " << *uptr << std::endl;

    // Shared Pointer
    std::shared_ptr<int> sptr = std::make_shared<int>(20);
    std::cout << "Value using shared_ptr: " << *sptr << std::endl;

    // Weak Pointer
    std::weak_ptr<int> wptr = sptr;
    if (auto spt = wptr.lock()) { // Check if resource is still managed
        std::cout << "Value via weak_ptr (shared reference still exists): " << *spt << std::endl;
    }

    return 0;
}