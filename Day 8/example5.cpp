// sum of n even number

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number here: " << endl;
    cin >> n;
    int sum = 0;
    int i = 2;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 2;
    }
    cout << "sum is : " << sum;

    return 0;
}