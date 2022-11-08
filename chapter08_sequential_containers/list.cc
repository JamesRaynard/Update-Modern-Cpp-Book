#include <list>
#include <iostream>
#include <algorithm>

// Function to display all the elements
void print(const std::list<int>& lst) {
    std::cout << "lst elements are: ";

    std::list<int>::const_iterator it;

    // Loop over all the elements
    for (it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << ",";
    }

    std::cout << '\n';
}

int main() {
    // Create an empty container
    std::list<int> lst;

    // Create some new elements at the back
    lst.push_back(4);
    lst.push_back(2);
    lst.push_front(1);
    lst.push_front(5);
    lst.push_front(3);

    std::cout << "lst contains "
              << lst.size() << " elements\n";
    std::cout << "lst is"
              << (lst.empty() ? "" : " not")
              << " empty\n";
    
    print(lst);
    
    std::cout << "Sorting list\n";
    lst.sort();
    
    print(lst);
    
    std::cout << "Inserting element in list\n";
    // Get iterator to the element with value 3
    std::list<int>::iterator three =
                     find(lst.begin(), lst.end(), 3);

    // Insert 0 before this element
    lst.insert(three, 0);
    
    print(lst);
    
    std::cout << "Removing the first element\n";
    lst.erase(lst.begin());
    print(lst);
    
    std::cout << "Clearing list\n";
    lst.clear();

    std::cout << "lst contains "
              << lst.size() << " elements\n";
    std::cout << "lst is"
              << (lst.empty() ? "" : " not")
              << " empty\n";

    print(lst);
}
