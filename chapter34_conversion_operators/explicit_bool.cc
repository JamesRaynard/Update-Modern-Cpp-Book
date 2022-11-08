#include <iostream>

class Test {
    int i{42};
  public:
    // Conversion operator to int
    explicit operator bool() const { return true; }
};

int main()
{
    Test test;
    if (test)
        std::cout << "OK!\n";
}
