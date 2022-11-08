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
       // Lock the mutex before the critical region
       print_mutex.lock();
       std::cout << str[0] << str[1]
                 << str[2] << '\n';

       // Unlock the mutex after the critical region
       print_mutex.unlock();
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
