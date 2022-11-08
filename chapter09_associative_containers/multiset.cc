#include <set>
#include <iostream>

// Function to display all the elements
void print(const std::multiset<int>& s) {
    std::cout << "Set values: ";

    std::multiset<int>::iterator it;

    // Loop over all the elements
    for (it = s.begin(); it != s.end(); ++it)
        std::cout << *it << ",";
    std::cout << '\n';
}

int main() {
    // Create an empty container
    std::multiset<int> si;

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
    std::cout << "Inserting an element with value 3\n";
    si.insert(3);

    print(si);
}
