#include <iostream>

// Class with function call operator
class evenp {
  public:
    // Our function call operator
    bool operator() (int n) {
      // Return true if n is exactly divisible by 2
      return (n % 2 == 0);
    }
};

int main() {
    // Create a functor object
    evenp is_even;

    // Call its function call operator with argument 6
    if (is_even(6))
        std::cout << "6 is an even number\n";
}
