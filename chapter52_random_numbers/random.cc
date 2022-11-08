#include <iostream>
#include <random>

int main()
{
    // Create a random engine object
    std::mt19937 mt;

    // Generate 10 random ints between 1 and 100
    std::cout << "10 random ints between 1 and 100:\n";

    // Integer distribution object
    // This will scale the random numbers between 1 and 100
    std::uniform_int_distribution<int> uid(1, 100);

    // Call the distribution object's operator ()
    // Pass the random engine as argument
    // This will generate the next random number,
    // then rescale it to be between 1 and 100
    for (int i = 0; i < 10; ++i)
        std::cout << uid(mt) << ", ";
    std::cout << "\n\n";
    
    // Generate 10 random doubles between 0 and 1
    std::cout << "10 random doubles between 0 and 1:\n";
 
    // Floating-point distribution object
    // This will scale the random numbers between 0 and 1
    std::uniform_real_distribution<double> did(0, 1);

    // Call the distribution object's operator ()
    // Pass the random engine as argument
    // This will generate the next random number,
    // then rescale it to be between 1 and 100
    for (int i = 0; i < 10; ++i)
        std::cout << did(mt) << ", ";
    std::cout << '\n';
}
