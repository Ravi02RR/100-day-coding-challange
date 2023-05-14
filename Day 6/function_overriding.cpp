#include <iostream>
using namespace std;

class Base
{
public:
    void display()
    {
        cout << "Display of Base" << endl;
    }
};

class Derived : public Base
{
public:
    void display(/*int x*/)
    {
        cout << "display of Derived" << endl;
    }
};

int main()
{
    Derived d;
    d.display();
}
