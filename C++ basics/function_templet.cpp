#include <iostream>
using namespace std;
// int maxim(int a, int b)
// {
//     return a > b ? a : b;
// }
// float maxim(float a, float b)
// {
//     return a > b ? a : b;
// }

template <class T>
T maxim(T a, T b)
{
    return a > b ? a : b;
}

int main()
{

    cout << maxim(12, 23) << endl;
    cout << maxim(12.3f, 23.5f) << endl;
    cout << maxim(12.3, 23.5) << endl;
    return 0;
}