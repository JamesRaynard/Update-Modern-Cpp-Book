#include <iostream>
#include <string>
#include <algorithm>

// Search for 'c' in 'str' and display the result
void find_it(const std::string& str, char c)
{
    // find() takes the iterator range to search
    // and the value to search for.
    //
    // On success, it returns an iterator
    // to the first matching element
    // On failure, it returns its second argument.
    std::string::const_iterator res =
                 std::find(str.cbegin(), str.cend(), c);

    // Compare the return value to the second argument.
    // If they are equal, the search failed.
    if (res != str.cend()) {
        std::cout << "The first occurrence of \'"
                  << c << "\' is at index "
                  << res - str.cbegin() << '\n';
    }
    else {
        std::cout << "No occurrences of \'" << c << "\'\n";
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
