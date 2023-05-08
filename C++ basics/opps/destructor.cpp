// called when  objectis deleted

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;
    Rectangle() // defsult condtructor --no  srg are passed
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(int x, int y) // parametrzide constructor
    {
        length = x;
        breadth = y;
    }
    Rectangle(Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
        // copy constructor
    }

    ~Rectangle()
    {
        cout << "destructor is active " << endl;
    }
};
int main()
{

    Rectangle r1;
    Rectangle r2(4, 5);
    Rectangle *r5 = new Rectangle();
    cout << r5->length << " and " << r5->breadth << endl;
    delete r5;
    cout << r2.length << " and " << r2.breadth << endl;
    cout << r1.length << " and " << r1.breadth << endl;

    Rectangle r3 = r2;
    cout << r3.length << " and " << r3.breadth << endl;

    return 0;
}