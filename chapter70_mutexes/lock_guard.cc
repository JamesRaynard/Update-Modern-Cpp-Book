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
       // Create a lock_guard object
       // to protect the critical region
       std::lock_guard<std::mutex> lg(print_mutex);
       std::cout << str[0] << str[1]
                 << str[2] << '\n';

       std::this_thread::sleep_for(50ms);

       // The lock_guard's destructor will unlock
       // the mutex after the critical region
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
