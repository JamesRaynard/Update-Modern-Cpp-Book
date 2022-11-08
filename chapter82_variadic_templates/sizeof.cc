#include <iostream>
#include <string>

// Variadic template function
// Args is a list of types
// args is a list of function arguments
template <typename... Args>
void func(Args... args)
{
    std::cout << "Function called with "
              << sizeof...(args)
              << " argument(s)\n";
}

int main()
{
    int i = 42;
    double d = 0.0;
    std::string str{ "text" };

    // Instantiated as func(std::string)
    func(str);

    // Instantiated as func(int, double, std::string)
    func(i, d, str);
}
