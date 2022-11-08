#include <iostream>
#include <string>

// Search for 'c' in 'str' and display the result
void find_it(const std::string& str, char c)
{
    int idx = str.find(c);
    if (idx != std::string::npos) {
        std::cout << "The first occurrence of \'"
                  << c << "\' is at index "
                  << idx << '\n';
    }
    else {
        std::cout << "No occurrences of \'"
                  << c << "\'\n";
    }
}

int main()
{
    // The string to be searched
    std::string str("Hello, World!");

    std::cout << "The string is \"" << str << "\"\n";

    find_it(str, 'o');
    find_it(str, 'O');
}
