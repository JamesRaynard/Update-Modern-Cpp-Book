#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    std::vector<std::string> words {
        "a", "collection", "of", "words",
        "with", "varying", "lengths"};

    // Find the first element with
    // more than 5 characters
    auto res = std::find_if(words.cbegin(), words.cend(),
                  [] (const std::string& str)
                  {
                      return str.size() > 5;
                  }
    );

    // Display the result
    if (res != words.cend()) {
        std::cout << "The result is ";
        std::cout << R"(")" << *res << R"(")" << '\n';
    }
}
