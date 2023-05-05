#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}

float sum(float a, float b)
{
    return a + b;
}

int main()
{
    cout << sum(10, 15) << endl;
    cout << sum(10, 15, 28) << endl;
    cout << sum(10.5f, 5.4f) << endl;

    return 0;
}
