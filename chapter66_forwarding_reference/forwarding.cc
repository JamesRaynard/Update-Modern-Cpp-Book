#include <iostream>

// A class to use as an argument type
// (The members are not relevant here)
class Test {};

// Function with a "forwarding reference"
template <typename T>
void func(T&& x)
{
    std::cout << "func called\n";
}

int main()
{
    Test test;
    Test& testref = test;

    // Call func() with lvalue argument
    func(test);

    // Call func() with lvalue reference argument
    func(testref);

    // Call func() with rvalue reference argument
    func(std::move(test));
}
