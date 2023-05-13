#include <iostream>
using namespace std;

class Rectangle
{
public:
    void area()
    {
        cout << "Area of r" << endl;
    }
};

class Cuboide : public Rectangle
{
public:
    void volume()
    {
        cout << "Volume of c" << endl;
    }
};

int main()
{
    Cuboide c;
    Rectangle *ptr = &c;
    c.area();
    c.volume();

    ptr->area();
    // ptr->volume(); // we cannnot acess this
    // volume is not prenet in th rectangle calss
    return 0;
}