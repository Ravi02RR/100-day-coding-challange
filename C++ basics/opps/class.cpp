#include <iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int breath;
    int area()
    {
        if (length < 0)
        {
            length = 1;
        }
        else
            length = length;

        return length * breath;
    }

    int perimetre()
    {
        return 2 * length + 2 * breath;
    }
};

int main()

{
    Rectangle R1;
    R1.length = -10;
    R1.breath = 12;

    cout << "area of rectangle is " << R1.area() << endl;
    cout << "perimertere of rectangle is " << R1.perimetre() << endl;
    return 0;
}
