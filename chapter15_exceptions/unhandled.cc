#include <iostream>
#include <vector>

int main()
{
    // Create an empty vector
    std::vector<int> vec;

    // Invalid element access
    // This throws an exception
    std::cout << vec.at(2) << '\n';
}
