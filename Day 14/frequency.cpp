#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);

    int frequency [size] = {0};

    for (int i = 0; i < size; i++)
    {
        frequency[a[i]]++;
    }

    for (int i = 0; i <size; i++)
    {
        if (frequency[i] != 0)
        {
            cout << "The frequency of " << i << " is " << frequency[i] << endl;
        }
    }

    return 0;
}
