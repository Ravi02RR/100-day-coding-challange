// binding of methopds and variable together

#include <iostream>
using namespace std;

class ABC
{
    int x; // priavet to this class

public:
    void set(int n)
    {
        x = n;
    }
};

int main()
{
    ABC obj1;
    obj1.set(3);
    // cout << obj1.get() << endl;
    return 0;
}
