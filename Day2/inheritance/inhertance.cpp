// same clas with some modification
#include <iostream>
using namespace std;
class Base
{
public:
    int x;
    void show()
    {
        cout << x << endl;
        ;
    }
};
class Derived : public Base // derive is drived from base
{
public:
    int y;
    void show()
    {
        cout << y << " " << x << endl;
    }
};
int main()
{
    Base b;
    b.x = 26;
    b.show();

    Derived d;
    d.x = 26;
    d.y = 36;
    d.show();
}