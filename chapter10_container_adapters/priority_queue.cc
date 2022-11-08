#include <queue>                        
#include <iostream>

void show(const std::priority_queue<int>& pq)
{
    std::cout << "The queue contains "
             << pq.size() << " elements\n";
    std::cout << "The highest priority element is "
              << pq.top() << '\n';
}

int main()
{
    // Create an empty container
    std::priority_queue<int> pq;

    // Add some elements to it
    pq.push(4);
    pq.push(3);
    pq.push(5);
    pq.push(1);
    show(pq);

    // Remove the first element
    std::cout << "Removing first element\n";
    pq.pop();
    show(pq);
}
