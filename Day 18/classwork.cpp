#include <iostream>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    for (int i = 2; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

bool isStrong(int num)
{
    int m = num;
    int sum = 0;
    while (m != 0)
    {
        int digit = m % 10;
        sum += factorial(digit);
        m = m / 10;
    }
    return (sum == num);
}

int main()
{
    if (isStrong(145))
    {
        cout << "is a strong number";
    }
    else
    {
        cout << "is not a strong number";
    }

    return 0;
}
