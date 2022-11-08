#include <iostream>
#include <initializer_list>

// Function taking std::initializer_list as argument
void announce(std::initializer_list<std::string> stations)
{
    std::cout << "This train will stop at: ";

    for (auto station : stations)
        std::cout << station << ", ";
}

int main()
{
    // Call the function with various arguments
    std::cout << "This is a fast train to London Waterloo.\n";
    announce( {"London Waterloo"} );
    std::cout << "\n\n";

    std::cout << "This is a stopping service"
              << " to London Waterloo.\n";
    announce( {"Clapham Junction", "Vauxhall",
                          "London Waterloo"} );
    std::cout << '\n';
}
