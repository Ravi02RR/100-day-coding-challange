#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            count = count + 1;
            break;
        }
    }

    if (count > 0)
    {
        cout << "Not a prime" << endl;
    }
    else
    {
        cout << "A prime" << endl;
    }

    return 0;
}
