#include <iostream>
#include <string>
#include <tuple>

// Variadic template function
// Args is a list of types
// args is a list of function arguments
template <typename... Args>
void func(Args... args)
{
    // Expand the argument parameter pack
    // Store the elements in an std::tuple
    auto arg_tuple = std::make_tuple(args...);

    // The arguments are now available at run-time
    // Get the first element of the tuple
    auto first = std::get<0>(arg_tuple);

    std::cout << "The function's first argument is "
              << first << '\n';
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
