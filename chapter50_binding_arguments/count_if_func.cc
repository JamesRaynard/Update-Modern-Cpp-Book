#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std::literals;

// Returns true if the arguments are equal
bool match(const std::string& animal)
{
    return animal == "cat"s;
}

int main()
{
    // Vector of animal names
    std::vector<std::string> animals = 
               {"cat", "dog", "tiger",
                "lion","bear", "cat", "giraffe"};

    // Pass match() as predicate to std::count_if()
    auto total = std::count_if(animals.begin(),
                               animals.end(),
                               match);

    std::cout << "The vector contains ";
    std::cout << total;
    std::cout << R"( occurrences of the word "cat")";
    std::cout << '\n';
}
