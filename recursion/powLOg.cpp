#include <iostream>
using namespace std;
int pow(int x, int n)
{
    if (n == 0)
        return 1;
    return x * pow(x, n - 1);
} 
//calculating power using log
int powLog(int x, int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return x;

    return powLog(x,n/2)*powLog(x,n/2);
}
int main()
{
    cout << powLog(3, 3);
    return 0;
}

int powLogarithmic(int a, int b)
{
    if (b == 0)
        return 1;
    else if (b % 2 == 0)
        return powLogarithmic(a*a, b/2);
    else
        return a * powLogarithmic(a*a, (b-1)/2);
}
