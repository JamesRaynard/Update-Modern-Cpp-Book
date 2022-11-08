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

int main() {
    // Vector of pointers to Shape objects
    std::vector<Shape*> shapes;

    // Create a pointer to a Shape object
    // and append it to the vector 
    shapes.push_back(new Circle());
    shapes.push_back(new Triangle());

    // Iterate over the objects in the vector
    // and call their draw() member function
    for (std::vector<Shape*>::iterator it
                            = shapes.begin();
                            it != shapes.end();
                            ++it) {
        (*it)->draw();
        delete (*it);
    }
}
