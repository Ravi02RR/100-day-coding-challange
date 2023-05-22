#include <iostream>
using namespace std;
bool iseven(int a)
{
    if (a & 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    cin >> num;

    if (iseven(num))
    {
        cout << " Number is Even" << endl;
    }
    else
    {
        cout << " Number is Odd" << endl;
    }

    return 0;
}