#include <iostream>
#include <future>
#include <chrono>

using namespace std::literals;

// The task function
int func()
{
    std::cout << "Executing func...\n";
    std::this_thread::sleep_for(5s);
    return 42;
}

int main()
{
    std::cout << "Calling func...\n";

    // Start the thread in the background
    auto result = std::async(func);

    // Do some other work
    std::this_thread::sleep_for(2s);

    // We are now ready for the result
    std::cout << "Calling get()\n";
    std::cout << "The result is: "
              << result.get() << '\n';
}
