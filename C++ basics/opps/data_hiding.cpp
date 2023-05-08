#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breath;

public:
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
    Rectangle R1;
    // R1.length = 10;
    // R1.breath = 12;

    R1.setLength(-10);
    R1.setBreadth(12);

    cout << R1.area() << endl;
    cout << "area of rectangle is " << R1.area() << endl;
    cout << "length of rectsnglr is" << R1.getLEngth() << endl;
    cout << "perimertere of rectangle is " << R1.perimetre() << endl;
    return 0;
}
