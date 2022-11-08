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
    int idx = -1;

    // Find the first element with
    // more than "n" characters
    auto res = std::find_if(words.cbegin(), words.cend(),
                  [n, idx] (const std::string& str)  mutable
                  {
                      ++idx;
                      return str.size() > n;
                  }
    );


    // Display the result
    if (res != words.cend()) {
        std::cout << "The result is ";
        std::cout << R"(")" << *res << R"(")" << '\n';
        std::cout << "This word has index " << idx << '\n';
    }
}
