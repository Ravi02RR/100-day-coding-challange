// Acess specifier

// public:
// privaet:
// protected:

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:
    void setLEngth(int l)
    {
        if (l > 0)
        {
            length = l;
        }
        else
        {
            length = 1;
        }
    }
    void setBreadth(int b)
    {
        if (b > 0)
        {
            breadth = b;
        }
        else
        {
            breadth = 1;
        }
    }

    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }

    int area()
    {
        return length * breadth;
    }
    int perimetre()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    Rectangle r1;
    // r1.length = 10;    //we have to use set and get function
    // r1.breadth = 20;
    r1.setLEngth(10);
    r1.setBreadth(5);

    cout << r1.area() << ", " << endl;
    cout << r1.perimetre() << endl;
    cout << "length: " << r1.getLength() << endl;
    cout << "breadth: " << r1.getBreadth() << endl;
}