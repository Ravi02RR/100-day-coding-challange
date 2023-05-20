#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    cout << "print the count from 1 to n" << endl;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
        // for sum
        sum = sum + i;
    }

    cout << "sum up to n is \n"
         << sum << endl;
    return 0;
}