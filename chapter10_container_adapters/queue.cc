#include <queue>                        
#include <iostream>

void show(const std::queue<int>& q)
{
    std::cout << "The queue contains "
         << q.size() << " elements\n";
    std::cout << "The first element is "
              << q.front() << '\n';
    std::cout << "The last element is "
              << q.back() << '\n';
}

int main()
 {
    // Create an empty container
    std::queue<int> q;

    // Add some elements to it
    q.push(4);  
    q.push(3);
    q.push(5);
    q.push(1);
    show(q);

    // Remove the first element
    std::cout << "Removing first element\n";
    q.pop();
    show(q);
}
