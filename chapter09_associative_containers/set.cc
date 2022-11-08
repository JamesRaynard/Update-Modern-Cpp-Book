#include <set>
#include <iostream>

// Function to display all the elements
void print(const std::set<int>& s) {
    std::cout << "Set values: ";

    std::set<int>::iterator it;

    // Loop over all the elements
    for (it = s.begin(); it != s.end(); ++it)
        std::cout << *it << ",";
    std::cout << '\n';
}

int main() {
    // Create an empty container
    std::set<int> si;

    // Add some elements to it
    si.insert(6);
    si.insert(7);
    si.insert(4);
    si.insert(5);
    si.insert(3);

    print(si);    

    std::cout << "si contains "
              << si.size() << " elements\n";
    std::cout << "si is"
              << (si.empty() ? "" : " not")
              << " empty\n";

    // Try to insert an element with value 3
    std::cout << "Trying to insert element with value 3\n";
    std::pair<std::set<int>::iterator, bool> ret =
                             si.insert(3);

    // Did it work?
    if (ret.second)
        std::cout << "Added value 3 to set\n";
    else
        std::cout << "Set already contains "
                  << *(ret.first) << '\n';

    // Erase the element with value 3
    std::cout << "Erasing element with value 3\n";
    si.erase(3);
    
    print(si);
    
    // Try to insert the element again
    std::cout << "Trying to insert element with value 3\n";
    std::pair<std::set<int>::iterator, bool> ret2 =
                             si.insert(3);

    // Did it work?
    if (ret2.second)
        std::cout << "Added value 3 to set\n";
    else
        std::cout << "Set already contains "
                  << *(ret.first) << '\n';
    
    print(si);
}
