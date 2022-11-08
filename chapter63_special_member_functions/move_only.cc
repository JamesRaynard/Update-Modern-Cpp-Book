#include <iostream>

class Test {
  public:
    // Default constructor
    Test() = default;

    // The copy operators are synthesized as deleted
    // Copy constructor
    // Test(const Test& other) = delete;

    // Copy assignment operator
    // Test& operator=(const Test& other) = delete;

    // Move constructor
    Test(Test&& other) noexcept
    {
        std::cout << "Move constructor\n";
    }

    // Move assignment operator
    Test& operator=(Test&& other) noexcept
    {
        std::cout << "Move assignment\n";
        return *this;
    }
};

int main()
{
    // Call default constructor
    Test test, test2;

    // Call move constructor
    Test test3(std::move(test));

    // Call move assignment operator
    test3 = std::move(test2);

    // Call copy constructor - error!
    //Test test4 = test3;
}
