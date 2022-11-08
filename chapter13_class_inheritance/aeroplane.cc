#include <iostream>

class Vehicle {
    int max_speed;
  public:
    // Constructor
    // Initialize max_speed
    Vehicle(int ms) : max_speed(ms)
    {
        std::cout << "Vehicle constructor\n";
    }

    // Member functions
    void start()
    {
        std::cout << "Engine started\n";
    }

    // Destructor
    ~Vehicle()
    {
        std::cout << "Vehicle destructor\n";
    }
};

class Aeroplane : public Vehicle {
    int max_height;
  public:
    // Constructor
    // First initialize the Vehicle part
    // Then initialize max_height
    Aeroplane(int ms, int mh) : Vehicle(ms),
                                max_height(mh)
    {
        std::cout << "Aeroplane constructor\n";
    }

    // Member functions
    void start()
    {
        std::cout << "Carrying out checks\n";

        // Call Vehicle's start() member function
        Vehicle::start();
        std::cout << "Ready for take-off!\n";
    }

    // Destructor
    ~Aeroplane()
    {
         std::cout << "Aeroplane destructor\n";
    }
};

int main()
{
    std::cout << "Creating Aeroplane object\n";
    Aeroplane plane(40000, 500);
    plane.start();
}
