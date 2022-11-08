#include <iostream>

int main()
{
    // Local variable z in the enclosing scope
    int z = 1;

    // Lambda expression with local variable y
    auto add_z1 = [y = z+1](int x)
    {
        return x + y;
    };

    // Invoke the lambda expression
    std::cout << "add_z1(2): " << add_z1(2) << '\n';
    std::cout << "add_z1(5): " << add_z1(5) << '\n';
}
