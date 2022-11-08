#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std::placeholders;

// Returns true if the arguments are equal
bool match(const std::string& animal,
           const std::string& species)
{
    std::cout << R"(1st argument is ")"
              << animal
              << R"(", 2nd argument is ")"
              << species << "\"\n";
    return animal == species;
}

int main()
{
    // Vector of animal names
    std::vector<std::string> animals = 
               {"cat", "dog", "tiger",
                "lion","bear", "cat", "giraffe"};

    // Call std::bind()
    // Captures "cat" as the second argument to match
    // and uses a placeholder for the first argument
    auto match_cat = std::bind(match, _1, "cat");

    // Pass match_cat as predicate to std::count_if()
    auto total = std::count_if(animals.begin(),
                               animals.end(),
                               match_cat);

    std::cout << "The vector contains ";
    std::cout << total;
    std::cout << R"( occurrences of the word "cat")";
    std::cout << '\n';
}
