#include <iostream>

class Test {
    int i{42};
  public:
    // Conversion operator to int
    operator int() const { return i; }
};

int main()
{
    Test test;
    int x = test + 5;
    std::cout << x << '\n';
}
