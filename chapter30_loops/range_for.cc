#include <iostream>
#include <vector>

int main()
{
    // Create a vector object
    // Use an list initializer
    std::vector<int> vec = {1, 2, 3, 4};

    // Use a range-for loop to display the elements
    std::cout << "Initial vector elements:\n";
    for (auto el: vec)
        std::cout << el << ", ";

    std::cout << "\n";

    // Use a range-for loop to modify the elements
    std::cout << "Adding two to each element\n";
    for (auto& el: vec)
        el += 2;

    // Use a range-for loop to display the elements again
    std::cout << "Modified vector elements:\n";
    for (auto el: vec)
        std::cout << el << ", ";

    std::cout << "\n";
}
