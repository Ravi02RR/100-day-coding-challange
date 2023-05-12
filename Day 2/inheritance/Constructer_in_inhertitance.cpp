#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "non-param Base" << endl;
    }
    Base(int x)
    {
        cout << "param Base" << x << endl;
    }
};
class DErived : public Base
{
public:
    DErived()
    {
        cout << "non-param Derived" << endl;
    }

    DErived(int y)
    {
        cout << "param Derived" << y << endl;
    }
    DErived(int y,int x) :Base(x)
    {
        cout << "param Derived" << y << endl;
    }
};

int main()
{
    DErived d(10);
}