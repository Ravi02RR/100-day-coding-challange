#include <iostream>
using namespace std;

void sumupN(int sum, int n)
{
    if (n == 0)
    {
        cout << sum << endl;
        return;
    }
    sumupN(sum + n, n - 1);
}
int sumupNreturn(int n)
{
    if (n == 0)
        return 0;
    return n + sumupNreturn(n - 1);
}

int main()
{
    sumupN(0, 10);
    cout << sumupNreturn(10);
    return 0;
}