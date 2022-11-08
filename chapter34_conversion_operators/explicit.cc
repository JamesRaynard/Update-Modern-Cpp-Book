#include <iostream>

class Test {
    int i{42};
  public:
    // Conversion operator to int
    explicit operator int() const { return i; }
};

int main()
{
    Test test;
    int x = static_cast<int>(test) + 5;
    std::cout << x << '\n';
}
