#include <iostream>
using namespace std;

// function to add two numbers...
int sum(int a, int b, int c = 0)
{
    return a + b + c;
}
int max(int a, int b, int c)
{
    return a > b && a > c ? a : b > c ? b
                                      : c;
}
int main()
{
    cout << sum(10, 13) << endl;
    cout << sum(12, 13, 14) << endl;

    cout << max(2, 13, 4) << endl;
    return 0;
}