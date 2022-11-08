#include <iostream>

class Test {};

// Overloads of newfunc()
void newfunc(Test& x)
{
    std::cout << "Modifiable version\n";
}

void newfunc(const Test& x)
{
    std::cout << "Unmodifiable version\n";
}

void newfunc(Test&& x)
{
    std::cout << "Move version\n";
}

// func() forwards its argument to newfunc()
template <typename T>
void func(T&& x)
{
    newfunc(std::move(x));
}

int main()
{
    Test t;
    const Test ct;

    std::cout << "Passing lvalue to func()\n";
    func(t);

    std::cout << "Passing const lvalue to func()\n";
    func(ct);

    std::cout << "Passing rvalue to func()\n";
    func(std::move(t));
}
