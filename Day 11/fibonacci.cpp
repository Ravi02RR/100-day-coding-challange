#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number upto you want...: " << endl;
    cin >> n;
    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i < n;  i++)
    {
        int nextNUmber = a + b;
        cout << nextNUmber << " ";
        a = b;
        b = nextNUmber;
    }

    return 0;
}