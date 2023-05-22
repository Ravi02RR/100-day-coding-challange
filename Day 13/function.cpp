#include <iostream>
#include <math.h>

using namespace std;
int power(int a, int b)
{
    return pow(a, b);
}
int main()
{
    int a = 5;
    int b = 2;
    int c = power(a, b);
    cout << c << endl;
    return 0;
}


//we are creating power function using loop