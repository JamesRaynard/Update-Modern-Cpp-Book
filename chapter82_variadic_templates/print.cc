#include <iostream>

// Non-variadic function
// Terminates the recursion
template <typename T>
void print(std::ostream& os, const T& t)
{
    os << t;
}

// Variadic function
// Recursively prints each element
template <typename T, typename... Args>
void print(std::ostream& os,
                    const T& t,
                    const Args&... args)
{
    // Print the front element
    os << t << ", ";

    // Recursive call
    // Prints the remainder of the list
    print(os, args...);
}

int main()
{
    print(std::cout, 2, 4, 6, "Hello");
}
