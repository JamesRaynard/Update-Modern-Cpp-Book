#include <string>
#include <iostream>
#include <cctype>
#include <algorithm>

// Case-insensitive string equality.
// Return true if lhs and rhs contain
// the same characters, regardless of case.
// Otherwise, false.
bool equal_strings(const std::string& lhs,
                  const std::string& rhs)
{
    // Call the std::equal() algorithm function
    // Use a lambda expression as predicate
    return std::equal(lhs.begin(), lhs. end(),
                      rhs.begin(),
         [](const char lc, const char rc)
         {
             return ::toupper(lc) == ::toupper(rc);
         }
    );
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
