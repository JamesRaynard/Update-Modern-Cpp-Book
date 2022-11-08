#include <iostream>

// print() does not mutate str
void print(char *str)
{
    std::cout << str << '\n';
}

int main()
{
    const char* msg = "Hello";
    // Does not compile
    // print(msg);
    print(const_cast<char *>(msg));
}
