#include <iostream>
using namespace std;
class car
{
public:
    virtual void start()
    {
        cout << "car start" << endl;
    }
};

class innovaCAr : public car
{
    void start()
    {
        cout << "innova start" << endl;
    }
};
class swift : public car
{
    void start()
    {
        cout << "swift start" << endl;
    }
};
int main()
{
    car *p = new innovaCAr();
    p->start();
    p = new swift();
    p->start();
}
