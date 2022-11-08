#include <iostream>

// Template function
// Takes two arguments of the same type
// Returns the greater one
//
// T is the parameter type
template <typename T>
// The arguments and the return value
// are of type T
T Max(const T& t1, const T& t2)
{
    return (t1 > t2) ? t1 : t2;
}

int main()
{
    // This will instantiate the template
    // and then call the function
    std::cout << "Max(7.1, 2.6): "
              << Max<float>(7.1, 2.6) << '\n';

    // The template will be instantiated as:
    // double  Max(const double& t1, const double& t2)
    // {
    // return (t1 > t2) ? t1 : t2;
    // }
}
