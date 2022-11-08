#include <iostream>

// Celsius class with explicit constructor
class Celsius {
    long double temp;
  public:
    explicit Celsius(long double temp) :
        temp(temp) {}
    void print()
    {
        std::cout << temp << " Celsius\n";
    }
};

// User-defined literal
// Returns an initialized Celsius object
Celsius operator "" _C(long double celsius)
{
    // Return a Celsius object
    return Celsius(celsius);
}

int main()
{
    // Call the literal operator with argument 100.0
    Celsius boiling_point = 100.0_C;
    std::cout << "100.0_C is ";
    boiling_point.print();
}

