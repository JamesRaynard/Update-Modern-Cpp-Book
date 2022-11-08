#include <iostream>
#include <future>

int main()
{
    // Packaged task object
    // The task function is a lambda expression
    // which takes two ints and returns an int
    std::packaged_task<int(int, int)> ptask(
         [] (int a, int b) { return a + b; }
    );

    // Obtain the std::future object which
    // corresponds to the packaged_task's promise
    std::future<int> fut = ptask.get_future();

    // Invoke the packaged_task
    // This will execute the task function
    // in a separate thread
    ptask(6, 7);

    // Use the future object to get
    // the result of calling the task function
    std::cout << "The result is: "
              << fut.get() << '\n';
}
