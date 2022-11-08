#include <map>
#include <string>
#include <iostream>

// Function to display all the elements
void print(const std::map<std::string, int>& scores) {
    std::cout << "Map elements:\n";

    std::map<std::string, int>::const_iterator it;

    // Loop over all the elements
    for (it = scores.begin(); it != scores.end(); ++it)
        std::cout << it->first << " has a score of "
                  << it->second << '\n';
}

int main() {
    // Create an empty container
    std::map<std::string, int> scores;

    // Add some elements to it
    scores.insert(std::pair<std::string, int>
                           ("Maybelline", 86));
    scores.insert(std::make_pair<std::string, int>
                           ("Graham", 78));

    std::cout << "scores contains "
              << scores.size() << " elements\n";
    std::cout << "scores is"
              << (scores.empty() ? "" : " not")
              << " empty\n";

    print(scores);
    
    // Find the value for the element with key "Graham"
    std::cout << "Graham's score is "
              << scores["Graham"] << '\n';
    print(scores);
    
    // Change Graham's value to 66
    std::cout << "Setting Graham's score to 66\n";
    scores["Graham"] = 66;
    print(scores);
    
    // Create a new element with key "Grace" and value 66
    std::cout << "Adding Grace's score of 66\n";
    scores["Grace"] = 66;
    print(scores);
    
    // Look up Graham's score
    std::map<std::string, int>::const_iterator gra
                                = scores.find("Graham");

    // Did we get a result?
    if (gra != scores.end())
        std::cout << "Found element with key "
                  << gra->first << ". It has value "
                  << gra->second << '\n';
}
