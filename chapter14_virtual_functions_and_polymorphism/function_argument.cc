#include <iostream>
#include <vector>

class Shape {
    public:
    virtual void draw() const
    {
         std::cout << "I'm a base class!\n";
    }
};

class Circle : public Shape {
    public:
    void draw() const
    {
        std::cout << "I'm a circle!\n";
    }
};

class Triangle : public Shape {
    public:
    void draw() const
    {
        std::cout << "I'm a triangle!\n";
    }
};

// Static type of shape is const Shape&
// Dynamic type of shape is const Circle&, etc
void draw_shape(const Shape& shape)
{
    // Calls draw() member function of Circle, etc
    shape.draw();
}

int main() {
    Circle circle;
    draw_shape(circle);
}
