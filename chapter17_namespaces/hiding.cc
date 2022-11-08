#include <iostream>

// Variable x in the global namespace
int x = 99;

namespace spqr {
    // Variable x in the spqr namespace
    int x = 47;

    void func()
    {
        // Uses spqr namespace's x
        std::cout << "x = " << x << '\n';

        // Uses global namespace's x
        std::cout << "x = " << ::x << '\n';
    }
}

int main()
{
    spqr::func();
}
