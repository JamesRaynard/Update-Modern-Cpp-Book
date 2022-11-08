#include <iostream>
class Test {
  public:
    Test() {}
    // Copy constructor with a side-effect
    Test(const Test&) { std::cout << "Copying\n"; }
};
// Function returning a temporary Test object
Test func()
{
    return Test();
}
int main()
{
    // Call func()
    // Use the return value to initialize a local variable
    Test test = func();
}

