#include <deque>
#include <iostream>
#include <algorithm>

// Function to display all the elements
void print(const std::deque<int>& dq) {
    std::cout << "dq elements are: ";

    std::deque<int>::const_iterator it;

    // Loop over all the elements
    for (it = dq.begin(); it != dq.end(); ++it) {
        std::cout << *it << ",";
    }

    std::cout << '\n';
}

int main() {
    // Create an empty container
    std::deque<int> dq;

    // Create some new elements at the back
    dq.push_back(4);
    dq.push_back(2);
    dq.push_front(1);
    dq.push_front(5);
    dq.push_front(3);

    std::cout << "dq contains "
              << dq.size() << " elements\n";
    std::cout << "dq is"
              << (dq.empty() ? "" : " not")
              << " empty\n";
    
    print(dq);
    
    std::cout << "Sorting deque\n";
    std::sort(dq.begin(), dq.end());
    
    print(dq);
    
    std::cout << "Inserting element in deque\n";
    // Get iterator to the element with value 3
    std::deque<int>::iterator three =
                     find(dq.begin(), dq.end(), 3);

    // Insert 0 before this element
    dq.insert(three, 0);
    
    print(dq);
    
    std::cout << "Removing the first element\n";
    dq.erase(dq.begin());
    print(dq);
    
    std::cout << "Clearing deque\n";
    dq.clear();

    std::cout << "dq contains "
              << dq.size() << " elements\n";
    std::cout << "dq is"
              << (dq.empty() ? "" : " not")
              << " empty\n";

    print(dq);
}
