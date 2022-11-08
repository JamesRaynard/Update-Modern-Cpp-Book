#include <iostream>
#include <string>

using namespace std::literals;

int main()
{
    std::string salutation{"Greetings"};

    // Stored lambda expression
    auto greet = [salutation] (const std::string& name)
    {
        return salutation + ", "s + name;
    };

    // Invoke the lambda expression
    std::cout << greet("dear reader") << '\n';
    std::cout << greet("Dr Stroustrup") << '\n';
}
