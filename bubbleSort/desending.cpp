#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 4, 6, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // normal print
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n - 1; i++) // n-1 passes

    {

        bool flag = true;
        // traverse
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j+1], arr[j + 1]);
                flag = false;
            }
        }
        if (flag == true)
        {
            break;
        }
    }

    // sorted print
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
