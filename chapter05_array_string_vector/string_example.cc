#include <iostream>
#include <string>

int main()
{
    // Initialize with a string literal (C-style string)
    std::string hello("Hello");

    // Elements can be accessed by index
    std::cout << "hello[0] = " << hello[0] << '\n';
    std::cout << "hello[4] = " << hello[4] << '\n';

    std::cout << "Changing hello[2] to \'b\'\n"; 
    hello[2] = 'b';

    // Display all the elements
    std::cout << "The elements of hello are now:\n";
    for (int i = 0; i < hello.size(); ++i)
        std::cout << "hello[" << i << "] = "
                  << hello[i] << '\n';

    // Display the entire string
    std::cout << "Output as a string: " << hello << '\n';
}
