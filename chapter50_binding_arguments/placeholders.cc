#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std::placeholders;

// Returns true if the argument equals "cat"
bool match(const std::string& animal,
           const std::string& species)
{
    return animal == species;
}

int main()
{
    // Call std::bind()
    // Captures "cat" as the second argument to match
    // and uses a placeholder for the first argument
    auto match_cat = std::bind(match, _1, "cat");

    // Calls match("dog", "cat")
    if (match_cat("dog")) {
        std::cout << "Matched\n";
    }
    else {
        std::cout << "Not matched\n";
    }
}
