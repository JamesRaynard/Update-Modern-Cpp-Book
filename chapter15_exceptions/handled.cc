#include <iostream>
#include <vector>

int main()
{
    // Create an empty vector
    std::vector<int> vec;

    // Execute code inside a "try" block
    try {
        // Invalid element access
        // This throws an exception
        std::cout << vec.at(2) << '\n';
    }
    // Catch block that can handle std::exception
    // and all its sub-classes
    catch (const std::exception& e) {
        std::cout << "Exception caught: "
                  << e.what() << '\n';
    }
}
