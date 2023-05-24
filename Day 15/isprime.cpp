#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a = 4;
    if (isPrime(a))
    {
        cout << "a is prime" << endl;
    }
    else
    {
        cout << "is not a prime nummbr" << endl;
    }
}