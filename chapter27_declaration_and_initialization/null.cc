#include <iostream>

// Overloaded function taking int by value
void func(int i)
{
    std::cout << "func(int) called\n";
}

// Overloaded function taking int by address
void func(int *i)
{
    std::cout << "func(int *) called\n";
}

int main()
{
    func(NULL);
    func(nullptr);
}
