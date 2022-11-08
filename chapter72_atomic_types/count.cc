#include <iostream>
#include <thread>
#include <vector>

// Global variable
int counter{0};

// Task function which increments counter
void task()
{
    for (int i = 0; i < 100'000; ++i)
        ++counter;
}

int main()
{
    // Start up some threads
    std::vector<std::thread> tasks;

    for (int i = 0; i < 10; ++i)
        tasks.push_back(std::thread{task});

    for (auto& t : tasks)
        t.join();

    // Display the final value of the counter
    std::cout << counter << '\n';
}
