#include <iostream>
using namespace std;

void printUpto(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << endl;
    printUpto(n - 1);
}
void ptintTill(int n)
{

    if (n == 0)
    {
        return;
    }

    ptintTill(n - 1);
    cout << n << endl;
}
int main()
{
    ptintTill(5);
    return 0;
}