#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    // cout << ptr;

    *ptr = 8;

    for (int i = 0; i < 4; i++)
    {
        cout << ptr[i] << "  ";
    }

    return 0;
}