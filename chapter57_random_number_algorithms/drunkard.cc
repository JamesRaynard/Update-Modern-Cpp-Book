#include <random>
#include <algorithm>
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std::literals;

int main() {
    // Create the random engine and distribution
    static std::mt19937 mt;
    static std::bernoulli_distribution berni;

    // The limits of the dot's motion
    int x = 1;
    const int WIDTH = 40;

    // The distance to move on each iteration
    // Positive to move to the right
    // Negative to move to the left
    int sign = 1;

    while (true) {
        // Calculate the new position
        if (berni(mt)) {
            sign = 1;
        }
        else {
            sign = -1;
        }

        // Reverse the dot when it reaches the limits
        if (x == 1) {
            sign = 1;
        }
        if (x == WIDTH) {
            sign = -1;
        }
        x += sign;

        // Display the new position
        std::cout << std::string(x, ' ') << '.';
        std::cout << std::string(WIDTH-x+1, ' ');
        std::cout << "\r" << std::flush;

        // Slow the animation to a reasonable speed
        std::this_thread::sleep_for(100ms);
    }

    return 0;
}
