#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    std::vector<std::string> words {
        "a", "collection", "of", "words",
        "with", "varying", "lengths"};

    int n = 5;

    // Find the first element with
    // more than "n" characters
    auto res = std::find_if(words.cbegin(), words.cend(),
                  [n] (const std::string& str)
                  {
                      return str.size() > n;
                  }
    );

    // Display the result
    if (res != words.cend()) {
        std::cout << "The result is ";
        std::cout << R"(")" << *res << R"(")" << '\n';
    }
}
