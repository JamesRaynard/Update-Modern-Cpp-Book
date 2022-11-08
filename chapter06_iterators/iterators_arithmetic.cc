#include <iostream>
#include <string>

int main()
{
    std::string str("Hello");
    std::cout << "The string is " << str << '\n';

    // Get an iterator to the second element of str
    std::string::iterator second = str.begin() + 1;
    std::cout << "The second element is " << *second << '\n';

    // Get an iterator to the last element of str
    std::string::iterator last = str.end() - 1;
    std::cout << "The last element is " << *last << '\n';

    // end() - begin() gives the number of elements
    std::cout << "The number of characters is "
              << str.end() - str.begin() << '\n';

    // Add half the number of elements to begin()
    // This gives an iterator to the middle element
    std::string::iterator mid = str.begin()
                              + (str.end() - str.begin())/2;
    std::cout << "The middle element is " << *mid << '\n';
}
