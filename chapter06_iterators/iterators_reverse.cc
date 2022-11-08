#include <iostream>
#include <string>

int main()
{
    std::string str("Hello");
    std::cout << "The string is " << str << '\n';

    for (std::string::reverse_iterator rit = str.rbegin();
                                       rit != str.rend();
                                       ++rit) {
        std::cout << *rit << ',';
    }
    std::cout << '\n';
}
