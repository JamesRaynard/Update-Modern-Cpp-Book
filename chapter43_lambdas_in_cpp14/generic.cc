#include <iostream>
#include <string>

using namespace std::literals;

int main()
{
    // Generic lambda expression
    auto func = [](auto x, auto y)
    {
       return x + y;
    };

    // Invoke it with arguments of various types
    std::cout << "func(2, 5): "
              << func(2, 5) << '\n';
    std::cout << "func(3.142, 4.2): "
              << func(3.142, 4.2) << '\n';
    std::cout << "func(Hello, World!): "
              << func("Hello, "s, "World"s) << '\n';
}
