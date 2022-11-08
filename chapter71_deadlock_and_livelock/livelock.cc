#include <thread>
#include <mutex>
#include <iostream>
#include <string>

using namespace std::literals;

// The mutexes to be locked
std::timed_mutex mut1, mut2;

// Thread A's task function
void funcA()
{
    std::this_thread::sleep_for(10ms);
    bool locked = false;

    while (!locked) {
        // Lock mut1
        std::lock_guard<std::timed_mutex> lk(mut1);
        std::this_thread::sleep_for(1s);
        std::cout << "After you, Claude!" << std::endl;
        locked = mut2.try_lock_for(5ms);
    }
    if (locked)
        std::cout << "Thread A has locked both mutexes\n";
}

// Thread B's task function
void funcB()
{
    std::this_thread::sleep_for(10ms);
    bool locked = false;

    while (!locked) {
        // Lock mut2
        std::lock_guard<std::timed_mutex> lk(mut2);
        std::this_thread::sleep_for(1s);
        std::cout << "No, after you, Cecil!" << std::endl;
        locked = mut1.try_lock_for(5ms);
    }
    if (locked)
        std::cout << "Thread B has locked both mutexes\n";
}

int main()
{
    std::thread tA{ funcA };
    std::this_thread::sleep_for(10ms);
    std::thread tB{ funcB };

    tA.join();
    tB.join();
}
