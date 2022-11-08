#include <iostream>
#include <vector>

void print(const std::vector<int>& vec)
{
    for (auto i : vec)
        std::cout << i << ", ";
    std::cout << '\n';
}

int main()
{
    std::vector<int> vec;

    // The first element will be added at the front
    auto it = vec.begin();
    int i;

    // Read ints from input
    while (std::cin >> i) {
        // Add an element.
        // The next element will be inserted before this one
        it = vec.insert(it, i);
    }

    print(vec);
}
