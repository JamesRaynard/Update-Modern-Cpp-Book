#include <iostream>

int main()
{
    // y is local to the lambda expression
    auto add_two = [y=2](int x)
    {
        return x + y;
    };

    // Invoke the lambda expression
    std::cout << "add_two(2): " << add_two(2) << '\n';
    std::cout << "add_two(5): " << add_two(5) << '\n';
}
