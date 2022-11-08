#include <map>
#include <string>
#include <iostream>

// Function to display all the elements
void print(const std::multimap<std::string, int>& scores) {
    std::cout << "Map elements:\n";

    std::multimap<std::string, int>::const_iterator it;

    // Loop over all the elements
    for (it = scores.begin(); it != scores.end(); ++it)
        std::cout << it->first << " has a score of "
                  << it->second << '\n';
}

int main() {
    // Create an empty container
    std::multimap<std::string, int> scores;

    // Add some elements to it
    scores.insert(std::make_pair<std::string, int>
                                ("Graham", 78));
    scores.insert(std::make_pair<std::string, int>
                                ("Grace", 66));
    scores.insert(std::make_pair<std::string, int>
                                ("Graham", 66));

    // Add some duplicate elements
    scores.insert(std::make_pair<std::string, int>
                                ("Graham", 72));
    scores.insert(std::make_pair<std::string, int>
                                ("Hareesh", 77));

    print(scores);
    
    // Remove all elements with key "Graham"
    std::cout << "Removing all Graham's scores\n";
    scores.erase("Graham");
    print(scores);
}
