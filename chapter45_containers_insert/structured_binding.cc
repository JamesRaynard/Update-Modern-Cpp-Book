#include <iostream>
#include <map>
#include <string>

int main()
{
    // Create an std::map object
    // Use an initializer list to populate it
    std::map<std::string, int> scores = {
        { "Maybelline", 86},
        { "Graham", 78}
    };

    // Display the elements
    std::cout << "Map elements:\n";
    for (auto [name, score] : scores) {
       std::cout << "Player " << name
              << " scored " << score
              << " points\n";
    }

    // insert() returns std::pair<
    //         std::map<std::string, int>::iterator, bool>
    auto [iter, success] = scores.insert(
                              std::make_pair("Graham", 66));

    if (success)
        std::cout << "Insertion succeeded\n";
    else {
        auto [name, score] = *iter;
        std::cout << "Insertion failed\n";
        std::cout << "Map already has an element with key "
                  << name
                  << ": it has value "
                  << score << '\n';
    }
}
