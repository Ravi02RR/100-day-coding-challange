#include <iostream>
using namespace std;
class BasicCar
{
public:
    virtual void start()
    {
        cout << "Basic car is started" << endl;
    }
};
class AdvanceCar : public BasicCar
{
public:
    void start()
    {
        cout << "Advance car is started" << endl;
    }
};

int main()
{
    BasicCar *bc = new AdvanceCar();
    bc->start();
    return 0;
}