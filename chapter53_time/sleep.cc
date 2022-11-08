#include <iostream>
#include <chrono>
#include <thread>

using namespace std::literals;

int main()
{
    std::cout << "Waiter!\n";

    // Pause the program for 2 seconds
    std::this_thread::sleep_for(2s);
    std::cout << "You called, sir?\n";
}
