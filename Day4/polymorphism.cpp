#include <iostream>

// Base class
class Shape
{
public:
    virtual void draw()
    {
        std::cout << "Drawing a shape." << std::endl;
    }
};

// Derived classes
class Circle : public Shape
{
public:
    void draw() override
    {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Square : public Shape
{
public:
    void draw() override
    {
        std::cout << "Drawing a square." << std::endl;
    }
};

int main()
{
    Shape *shape1 = new Circle();
    Shape *shape2 = new Square();

    shape1->draw(); // Calls the draw() method of Circle
    shape2->draw(); // Calls the draw() method of Square

    delete shape1;
    delete shape2;

    return 0;
}
