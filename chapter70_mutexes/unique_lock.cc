#include <iostream>
#include <thread>
#include <string>
#include <mutex>

using namespace std::literals;

// Global mutex object
std::mutex print_mutex;

// Task function
void print(std::string str)
{
    for (int i = 0; i < 5; ++i) {
       // Create a unique_lock object
       // to protect the critical region
       std::unique_lock<std::mutex> ul(print_mutex);
       std::cout << str[0] << str[1]
                 << str[2] << '\n';

       // Unlock the mutex after the critical region
       ul.unlock();
       std::this_thread::sleep_for(50ms);
    }
}

int main()
{
    // Start three new threads
    std::thread t1{ print, "abc" };
    std::thread t2{ print, "def" };
    std::thread t3{ print, "xyz" };

    // Wait for them to finish
    t1.join();
    t2.join();
    t3.join();
}
