#include <iostream>
using namespace std;
int main()
{
    int n, sum;
    sum = 0;
    cin >> n;
    while (n >= 1)
    {
        sum = sum + n;
        n = n - 1;
    }
    cout << "sum is " << sum;

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int n, sum;
    cin >> n;
    sum = 0;
    int i = 0;

    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout << "sum is " << sum;

    return 0;
}