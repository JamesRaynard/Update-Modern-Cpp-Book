#include <iostream>
#include <initializer_list>
#include <vector>

class Test {
    std::vector<int> vec;
  public:
    // Constructor which takes an initializer list
    Test(std::initializer_list<int> il) : vec(il) {}

    void print()
    {
        for (auto i : vec)
            std::cout << i << ", ";
    }
};

int main()
{
    // Use an initializer list
    // to initialize a Test object
    Test test{ 3, 4, 5 };
    test.print();
    std::cout << '\n';
}
