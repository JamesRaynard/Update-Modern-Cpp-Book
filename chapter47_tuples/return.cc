#include <iostream>
#include <tuple>
#include <string>

using namespace std::literals;

// Function returning an std::tuple
std::tuple<double, int, std::string> func()
{
    // The returned tuple
    return {1.0, 2, "Three"s};
}

int main()
{
    // Variables to store the unpacked tuple elements
    double d;
    int i;
    std::string str;

    // Unpack the returned tuple
    std::tie(d, i, str) = func();

    std::cout << "Tuple elements are: "
              << d << ", " << i
              << R"(, ")" << str << R"(")" << '\n';
}
