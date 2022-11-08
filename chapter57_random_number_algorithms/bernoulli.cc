#include <iostream>
#include <random>

int main()
{
    // Create the random engine and distribution
    static std::mt19937 mt;
    static std::bernoulli_distribution berni;

    // Generate 5 outcomes at random
    for (int i = 0; i < 5; ++i) {
        if (berni(mt)) {
            std::cout << "Your subjects are grateful ";
            std::cout << "for your wise rulership.\n";
        }
        else
            std::cout << "The peasants are revolting!\n";
    }
}
