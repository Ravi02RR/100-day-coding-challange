#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breath;

public:
    Rectangle()
    {
        length = 1;
        breath = 1;
    }
    Rectangle(int l, int b)
    {
        setLength(l);
        setBreadth(b);
    }

    // copy constructor
    Rectangle(Rectangle &r)
    {
        length = r.length;
        breath = r.breath;
    }

    void setLength(int l)
    {
        if (l < 0)
        {
            length = 1;
        }
        else
        {
            length = l;
        }
    }
    void setBreadth(int b)
    {
        if (b < 0)
        {
            breath = 1;
        }

        else
        {
            breath = b;
        }
    }
    int getBreath()
    {
        return breath;
    }
    int getLEngth()
    {
        return length;
    }
    int area()
    {
        return length * breath;
    }

    int perimetre()
    {
        cout << length << " " << breath << "--------test" << endl;
        return 2 * length + 2 * breath;
    }
};

int main()

{
    Rectangle r1(10, 5);
    Rectangle r2(r1);
    cout << r1.area() << endl;

    return 0;
}
