#include <string>
#include <iostream>
#include <cctype>

// Case-insensitive string equality.
// Return true if lhs and rhs contain
// the same characters, regardless of case.
// Otherwise, false.
bool equal_strings(const std::string& lhs,
                  const std::string& rhs)
{
    // If the two strings have different lengths,
    // they must be different
    if (lhs.size() != rhs.size())
        return false;

    // If the two strings have the same length...
    auto lit = lhs.cbegin();
    auto rit = rhs.cbegin();

    // Iterate over both strings
    while (lit != lhs.cend() && rit != rhs.cend()) {
        // Convert each string's character to
        // upper case and compare them
        if (::toupper(*lit) != ::toupper(*rit))
            return false;
        ++lit;
        ++rit;
    }

    // If we get here, there are no differences
    return true;
}

// Function which calls equal_strings
// and displays the result
void test(const std::string& str1,
          const std::string& str2)
{
    std::cout << std::boolalpha;
    std::cout << str1 << " and " << str2 << '\n';
    std::cout << "equal_strings() returns ";
    std::cout << equal_strings(str1, str2) << '\n';
    std::cout << "std::string == () returns ";
    std::cout << (str1 == str2) << '\n';
}

int main()
{
    test("lambda", "Lambda");
    test("lambda", "lambada");
}
