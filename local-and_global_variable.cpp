#include <iostream>
using namespace std;
int g = 20; // gloabal vairable
void fun()
{
    int a = 10; // local variable
    a++;
    cout << a << endl;
}
int main()
{

    cout << "" << endl;
    return 0;
}