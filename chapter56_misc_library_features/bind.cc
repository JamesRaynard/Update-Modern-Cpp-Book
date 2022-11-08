#include <iostream>
#include <vector>
#include <functional>

using namespace std::placeholders;

// Function which takes arguments by reference
void incr(int& number, int& value)
{
    number = value;
    ++value;
}

int main()
{
    int n{2};

    // Bind n as the second argument of incr
//    auto incr_n = std::bind(incr, _1, n);
    auto incr_n = std::bind(incr, _1, std::ref(n));

    // Create a vector with 5 elements
    // with value 0
    std::vector<int> numbers(5, 0);

    // For each element, call incr
    // with the bound argument n.
    // The value of n should increase on each call
    for (auto& number : numbers)
        incr_n(number);

    std::cout << "The elements of numbers are:\n";
    for (const auto& number : numbers)
        std::cout << number << ", ";

    std::cout << "\nn = " << n << '\n';
}
