#include <iostream>
#include <string>

// Function taking const lvalue reference
// (Pass by const reference)
void func(const std::string& str)
{
    std::cout << "lvalue reference version\n";
}


// Function taking rvalue reference
// (Pass by move)
void func(std::string&& str)
{
    std::cout << "rvalue reference version\n";
}

int main()
{
    // lvalue object
    std::string lval{"Perm"};

    // lvalue reference
    std::string& lref = lval;

    // Call func() with temporary object
    std::cout << "Temporary object: ";
    func(std::string{"Temp"});

    // Call func() with lvalue object
    std::cout << "Lvalue object: ";
    func(lval);

    // Call func() with lvalue reference
    std::cout << "Lvalue reference: ";
    func(lref);

    // Call func() with rvalue reference
    std::cout << "std::move(): ";
    func(std::move(lref));
}
