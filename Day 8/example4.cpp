// iif number is prime or not

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter the number you want to check :" << endl;
    cin >> n;
    int i = 2;
    int count = 0;
    while (i < n)
    {
        if (n % i == 0)
        {
            count = count + 1;
        }
        i = i + 1;
    }

    if (count > 1)
    {
        cout << "not prime" << endl;
    }
    else
    {
        cout << " prime" << endl;
    }
    return 0;
}