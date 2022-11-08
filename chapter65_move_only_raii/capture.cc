#include <iostream>
#include <string>
#include <vector>

int main()
{
    // Create a vector with 5 elements
    std::vector<std::string> strings(5);

    // Capture by reference
    std::cout << "Capture by reference\n";
    [&strings]
    {
        std::cout << "Size in lambda = ";
        std::cout << strings.size() << '\n';
    }();

    std::cout << "After calling lambda, ";
    std::cout << "size in main = ";
    std::cout << strings.size() << '\n';

    // Capture by move
    std::cout << "Capture by move\n";
    [vs = std::move(strings)]
    {
        std::cout << "Size in lambda = ";
        std::cout << vs.size() << '\n';
    }();

    std::cout << "After calling lambda, ";
    std::cout << "size in main = ";
    std::cout << strings.size() << '\n';
}
