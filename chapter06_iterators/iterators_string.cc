#include <iostream>
#include <string>

int main()
{
    std::string str("Hello");

    // Get an iterator to the start of the string
    std::string::iterator it = str.begin();

    // Use it to iterate over the string
    // Stop at the element after last
    while (it != str.end()) {
        // Dereference it to get the element
        std::cout << *it << ',';

        // Advance it to the next element
        ++it;
    }
    std::cout << '\n';
}
