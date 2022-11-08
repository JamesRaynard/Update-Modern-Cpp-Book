#include <iostream>
#include <thread>
#include <condition_variable>
#include <string>
#include <chrono>
#include <mutex>

using namespace std::literals;

// Global variables
std::mutex mut;
std::condition_variable cv;
std::string sdata{ "Empty" };

// Task function for consumer thread
void reader()
{
    // Lock the mutex
    std::unique_lock<std::mutex> guard(mut);

    // Wait to be notified
    cv.wait(guard);

    // Wake up and process the new data
    std::cout << "Data is " << sdata << '\n';
}

// Task function for producer thread
void writer()
{
    std::cout << "Writing data...\n";

    // Do some work...
    std::this_thread::sleep_for(2s);

    {
        // Lock the mutex
        std::lock_guard<std::mutex> lg(mut);

        // Modify the shared data
        sdata = "Populated";
    }

    // Notify the condition variable
    cv.notify_one();
}

int main()
{
    std::cout << "Data is " << sdata << '\n';

    // Start the threads
    std::thread read{ reader };
    std::thread write{ writer };

    write.join();
    read.join();
}

