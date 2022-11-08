#include <iostream>
#include <thread>

// The thread's task function
void hello()
{
    std::cout << "Hello, Thread!\n";
}

int main()
{
    // Create an std::thread object
    // Pass its task function as the first argument
    std::thread t{ hello };

    // Stop and wait for the thread to execute
    t.join();
}
