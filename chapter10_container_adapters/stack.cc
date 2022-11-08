#include <stack>                        
#include <iostream>

void show(const std::stack<int>& sta)
{
    std::cout << "The stack contains "
             << sta.size() << " elements\n";
    std::cout << "The top element is "
              << sta.top() << '\n';
}

int main() {
    // Create an empty container
    std::stack<int> sta;

    // Add some elements to it
    sta.push(1);
    sta.push(2);
    sta.push(5);
    sta.push(3);
    show(sta);

    // Remove the first element
    std::cout << "Removing top element\n";
    sta.pop();
    show(sta);
}
