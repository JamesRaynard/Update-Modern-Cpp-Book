#include <iostream>
long double operator "" _F_to_C(long double fahr)
{
    // Convert to Celsius
    long double celsius = 5.0/9.0 * (fahr - 32.0);
    return celsius;
}
int main()
{
    std::cout << "212 Fahrenheit is " << 212.0_F_to_C
              << " Celsius\n";
}
