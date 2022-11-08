#include <iostream>
#include <chrono>

using namespace std::literals;
namespace sc = std::chrono;

// Function to calculate the nth Fibo number
long long fibonacci(long long n)
{
    if (n < 2)
      return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    // Get the time point for the start
    auto start = sc::steady_clock::now();

    // Perform the calculation
    auto result = fibonacci(45);

    // Get the time point for the finish
    auto finish = sc::steady_clock::now();

    std::cout << "The result is: " << result << '\n';

    // Calculate the time taken, in milliseconds
    auto elapsed = sc::duration_cast<sc::milliseconds>
                               (finish - start).count();
    std::cout << "Time taken: " << elapsed << '\n';
}
