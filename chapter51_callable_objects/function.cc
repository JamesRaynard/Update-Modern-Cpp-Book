#include <iostream>
#include <string>
#include <vector>
#include <functional>

using namespace std::placeholders;

// Non-member function
bool match_ptr(const std::string& str)
{
    return str == "cat";
}

// Functor
class functor_match {
  public:
    bool operator()(const std::string& str)
    {
        return str == "cat";
    }
};

// Function for use with std::bind()
bool bind_match(const std::string& animal,
                const std::string& species)
{
    return animal == species;
}

// Use the callable object
// to find the number of matches in texts
int count_strings(const std::vector<std::string>& texts,
       std::function<bool(const std::string&)> match_func)
{
    int tally = 0;
    for (auto text : texts) {
        if (match_func(text)) {
            ++tally;
        }
    }
    return tally;
}

int main()
{
    std::vector<std::string> animals = 
        {"cat", "dog", "tiger", "lion", "bear",
         "cat", "giraffe"};
    int n = 0;

    // With function pointer
    std::cout << "Calling with function pointer\n";
    n = count_strings(animals, match_ptr);
    std::cout << "The vector contains " << n;
    std::cout << R"( occurrences of the word "cat")" << '\n';

    // With functor
    std::cout << "\nCalling with functor\n";
    n = count_strings(animals, functor_match());
    std::cout << "The vector contains " << n;
    std::cout << R"( occurrences of the word "cat")" << '\n';

    // With lambda expression
    std::cout << "\nCalling with lambda\n";
    auto lambda_match = [](const std::string& str)
                        {
                            return str == "cat";
                        };

    n = count_strings(animals, lambda_match);
    std::cout << "The vector contains " << n;
    std::cout << R"( occurrences of the word "cat")" << '\n';

    // With the result of std::bind()
    std::cout << "\nCalling with std::bind() object\n";
    auto match_cat = std::bind(bind_match, _1, "cat");
    n = count_strings(animals, match_cat);
    std::cout << "The vector contains " << n;
    std::cout << R"( occurrences of the word "cat")" << '\n';
}
