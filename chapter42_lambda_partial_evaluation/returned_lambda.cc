#include <iostream>
#include <string>

using namespace std::literals;

// Function which returns a stored lambda expression
auto greeter(const std::string& salutation)
{
    auto greet = [salutation] (const std::string& name)
    {
        return salutation + ", "s + name;
    };

    return greet;
}

int main()
{
    // Create some stored lambdas
    // Each lambda is bound to a different string
    auto greetings = greeter("Greetings");
    auto hello = greeter("Hello");
    auto formal = greeter("Good morning");

    // Invoke the lambda expressions
    std::cout << greetings("dear reader") << '\n';
    std::cout << hello("James") << '\n';
    std::cout << formal("Dr Stroustrup") << '\n';
}

