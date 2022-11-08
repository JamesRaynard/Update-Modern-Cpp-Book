#include <iostream>
#include <vector>

int main()
{
    // C++03 has no general way to initialize vector elements.
    // We create an empty vector, then add elements to it.
    std::vector<int> vec;

    // push_back() adds a new element
    // at the back of the vector.
    // Add an element with value 4
    vec.push_back(4);

    // Add some more elements at the back
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(1);

    // Elements can be accessed by index
    std::cout << "vec[0] = " << vec[0] << '\n';
    std::cout << "Changing vec[2] to 6\n";
    vec[2] = 6;

    // Display all the elements
    std::cout << "The elements of vec are now:\n";
    for (int i = 0; i < vec.size(); ++i)
        std::cout << "vec[" << i << "] = "
                  << vec[i] << '\n';
} 
