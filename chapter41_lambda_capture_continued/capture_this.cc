#include <iostream>

class Test {
    // Private data member
    int time{10};
  public:
    // Member function with a lambda expression
    void countdown()
    {
        // Capture the class object
        [this] () {
            if (time > 0)
                std::cout << time << '\n';
            else if (time == 0)
                std::cout << "Liftoff!\n";
            --time;
        }();
    }
};

int main()
{
    Test test;
    for (int i = 0; i < 12; ++i)
        test.countdown();
}
