#include <iostream>

int main()
{
    const char str[] = {'H', 'e', 'l', 'l', 'o'};
    // Using the array name in a pointer context
    // gives the address of the first element
    // const char *ptr = &str[0];
    const char *ptr = str;

    // Add 5 to ptr 
    // gives a pointer to the element after last
    const char *p_end = ptr + 5;

    // Use ptr to iterate over the array
    // Stop at the element after last
    while (ptr != p_end) {
        // Dereference ptr to get the element
        std::cout << *ptr << ',';

        // Advance ptr to point to the next element
        ++ptr;
    }

    std::cout << '\n';
}
