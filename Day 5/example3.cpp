#include <iostream>
using namespace std;

class BasicCar
{
public:
    void start()
    {
        cout << "car started" << endl;
    }
};

class AdvanceCAr : public BasicCar
{
public:
    void playMusic()
    {
        cout << "music palying" << endl;
    }
};
int main()
{
    AdvanceCAr a;

    BasicCar *ptr = &a;

    ptr->start();
    // ptr->playMusic();   it means we haev a advance car but  we are call it as a basic car
    a.start();
    a.playMusic();
    return 0;
}