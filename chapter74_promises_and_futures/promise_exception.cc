#include <iostream>
#include <thread>
#include <future>
#include <chrono>

using namespace std::literals;

// Producer function with std::promise
void produce(std::promise<int>& px)
{
    try {
        int x = 42;
        std::this_thread::sleep_for(1s);
        std::cout << "The promise sets "
                  << "the shared state to "
                  << x << '\n';
    
        // Throw an exception
        throw std::out_of_range("Oops");
    
        // Store the "result"
        px.set_value(42);
    }
    catch (...) {
        // Store the exception in the shared state
        px.set_exception(std::current_exception());
    }
}
 
// Consumer function with std::future
void consume(std::future<int>& fut)
{
    std::cout << "Future calls get()\n";

    try {
        // Read the result from the shared state
        int x = fut.get();
        std::cout << "Future returns from get()\n";
        std::cout << "The result is " << x << '\n';
    }
    catch (std::exception& e) {
        std::cout << "Exception caught: "
                  << e.what() << '\n';
    }
}

int main()
{
    // Create the promise and future objects
    std::promise<int> px;
    std::future<int> fx = px.get_future();

    // Start the threads
    // Pass the promise and the future to them
    std::thread fut{ produce, std::ref(px) };
    std::thread prom{ consume, std::ref(fx) };

    fut.join();
    prom.join();
}
