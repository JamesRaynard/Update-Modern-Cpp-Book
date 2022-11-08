#include <iostream>
#include <algorithm>

std::string operator "" _rev(const char *str, size_t len)
{
    // Create a temporary string from the arguments
    std::string retval(str, len);
    // Reverse the temporary string
    std::reverse(retval.begin(), retval.end());
    // Return the reversed string
    return retval;
}

int main()
{
    std::cout << R"("xyz" reversed is ")"
              << "xyz"_rev << R"(")" << '\n';
}
