#include <iostream>
#include <memory>

int main()
{
    // Create an std::shared_ptr object
    // ptr's reference count will be 1
    auto ptr = std::make_shared<int>(42);

    // Bind an std::weak_ptr to ptr
    // ptr's reference count will still be 1
    std::weak_ptr<int> wptr = ptr;

    // Destroy the shared_ptr
    // ptr's reference count will be 0
    // wptr will be "dangling"
    ptr = nullptr;

    // Try to access ptr's allocated memory
    std::shared_ptr<int> sp1 = wptr.lock();

    if (sp1) {
        // ptr's allocated memory is still valid
        std::cout << "sp1's data is " << *sp1 << '\n';
    }
    else {
        // ptr's allocated memory is no longer valid
        std::cout << "sp1's data is not available\n";
    }
}
