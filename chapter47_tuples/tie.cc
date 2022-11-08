#include <iostream>
#include <tuple>
#include <string>

using namespace std::literals;

int main()
{
    // Create an std::tuple object
    auto numbers = std::make_tuple(1.0, 2, "Three"s);

    // Variables to store the unpacked tuple elements
    double d;
    int i;
    std::string str;

    // Unpack the tuple into the variables
    std::tie(d, i, str) = numbers;

    std::cout << "Tuple elements are: "
              << d << ", " << i
              << R"(, ")" << str << R"(")" << '\n';
}
