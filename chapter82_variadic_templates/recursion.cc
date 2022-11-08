#include <iostream>
#include <string>

// Non-variadic template function
template <typename T>
void func(T t)
{
    std::cout << "Non-variadic function\n";
    std::cout << "Argument: " << t << '\n';
}

// Variadic template function
// Args is a list of types
// args is a list of function arguments
template <typename T, typename... Args>
void func(T t, Args... args)
{
    std::cout << "Function called with "
              << sizeof...(args) + 1
              << " argument(s)\n";

    std::cout << "Processing argument: "
              << t << '\n';

    // Recursive call
    // Pass the remaining arguments
    func(args...);
}

int main()
{
    int i = 42;
    double d = 0.0;
    std::string str{ "text" };

    // Instantiated as func(int, double, std::string)
    func(i, d, str);
}
