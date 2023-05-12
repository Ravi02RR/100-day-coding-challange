#include <iostream>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout << "fun1 of base class" << endl;
    }
    // void fun2()
    // {
    //     cout << "fun2 of base class" << endl;
    // }
    // void fun1()
    // {
    //     cout << "fun1 of base class" << endl;
    // }
};

class Derived : public Base
{
public:
    void fun2()
    {
        cout << "fun2 of derived class" << endl;
    }
};
int main()
{
    Derived d;
    Base *ptr = &d;
    ptr->fun1();
    Base b;
    // Derived *ptr = &b;     // we cannnot do that

    // ptr.fun2(); //we can  not do that

    // d.fun1();
    // d.fun2();
    return 0;
}