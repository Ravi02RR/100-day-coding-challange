#include <iostream>
using namespace std;

class Base
{
public:
    virtual void fun()
    {
        cout << "Base" << endl;
    }
};

class Drived : public Base
{
public:
    void fun()
    {
        cout << "Drived" << endl;
    }
};
int main()
{
    Drived d;
    Base *ptr = &d;
    ptr->fun();
    return 0;
}