#include <iostream>
#include <vector>
#include <memory>

// Base class definition
class Shape {
  public:
    virtual void draw() = 0;
    virtual ~Shape() = default;
};

// Derived classes
class Circle : public Shape {
  public:
    void draw() override { std::cout << "Circle\n"; }
};

class Triangle : public Shape {
  public:
    void draw() override { std::cout << "Triangle\n"; }
};

class Rectangle : public Shape {
  public:
    void draw() override { std::cout << "Rectangle\n"; }
};

int main()
{
    // Vector of unique_ptr to the base class
    std::vector<std::unique_ptr<Shape>> shapes;

    // Populate the vector
    shapes.emplace_back(std::make_unique<Circle>());
    shapes.emplace_back(std::make_unique<Triangle>());
    shapes.emplace_back(std::make_unique<Rectangle>());

    // Iterate over the elements of the vector
    // Call the virtual member function
    for (auto& shape : shapes)
        shape->draw();
}
