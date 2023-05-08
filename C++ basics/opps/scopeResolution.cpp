#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r1);
    int getlength() { return length; }
    int getbreadth() { return breadth; }
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimetre();
    bool isSquare();
    ~Rectangle();
};

int main()
{
    Rectangle r1(10, 10);
    cout << "area " << r1.area() << endl;
    if (r1.isSquare())
        cout << "yes it is square" << endl;

    return 0;
}

Rectangle::Rectangle()
{
    length = breadth = 1;
}
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}
void Rectangle::setLength(int l)
{
    length = l;
}
void Rectangle::setBreadth(int b)
{
    length = b;
}
int Rectangle::area()
{
    return length * breadth;
}
int Rectangle::perimetre()
{
    return 2 * (length + breadth);
}
bool Rectangle::isSquare()
{
    return length == breadth;
}
Rectangle::~Rectangle()
{
    cout << "destroyer is active" << endl;
}