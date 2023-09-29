#include <iostream>
using namespace std;

int sum(int x, int y)
{   
    int *p1 = &x;
    int *p2 = &y;
    cout << *p1 + *p2;
}

int main()
{
    int x = 10;
    int *p = &x;
    cout << *p <<"     ";

    sum(3, 4);
    return 0;
}