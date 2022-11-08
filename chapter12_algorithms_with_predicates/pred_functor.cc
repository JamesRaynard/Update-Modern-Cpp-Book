#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Define a predicate as a functor
class shorter {
public:
    // Overloaded () operator
    // Takes two strings as arguments
    // Returns true/false depending on relative string length
    bool operator () (const std::string& lhs,
                      const std::string& rhs) {
        return lhs.size() < rhs.size();
    }
};

int main() {
    std::vector<std::string> words;
    std::string str;

    std::cout << "Please type in some words,"
              << " separated by spaces.\n";
    std::cout << "Enter \"stop\" to finish:\n";

    while (std::cin >> str && str != "stop") {
        words.push_back(str);
    }
    
    // Sort the words in default order
    std::sort(words.begin(), words.end());
   
    std::cout << "Your words in default order:\n";
   
    std::vector<std::string>::iterator it;
    for (it = words.begin(); it != words.end(); ++it)
        std::cout << *it << ", ";
    std::cout << '\n';

    // Sort the words by length
    // Pass an object of the functor
    // as the third argument to std::sort()
    std::sort(words.begin(), words.end(), shorter());
    
    std::cout << "Sorted by length:\n";
    for (it = words.begin(); it != words.end(); ++it)
        std::cout << *it << ", ";
    std::cout << '\n';
}
