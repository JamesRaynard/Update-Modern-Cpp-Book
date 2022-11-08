#include <iostream>
#include <memory>

// Data structure
// This represents a point on the screen
struct point {
    int x;
    int y;
};

int main()
{
    // Create an std::unique_ptr
    // Allocate memory for a point object
    // with the initial value (3, 6)
    auto ptr = std::make_unique<point>(point{3, 6});

    std::cout << "x coordinate: " << ptr->x;
    std::cout << ", y coordinate: " << ptr->y;
    std::cout << '\n';
}
