#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

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

    // Use a lambda expression to sort the data
    std::sort(words.begin(), words.end(),
             [] (const std::string& lhs,
                 const std::string& rhs) {
                return lhs.size() < rhs.size();
             }
    );

    std::cout << "Sorted using a lambda expression:\n";
    for (it = words.begin(); it != words.end(); ++it)
        std::cout << *it << ", ";
    std::cout << '\n';
}
