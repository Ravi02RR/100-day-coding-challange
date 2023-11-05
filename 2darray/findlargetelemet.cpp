#include <iostream>
#include <climits>
using namespace std;

// int max(int arr[][])
// {
// }

int main()
{
    int r;
    cout << "enter the mumber of rows" << endl;
    cin >> r;
    int c;
    cout << "enter the mumber of column" << endl;
    cin >> c;
    int arr[r][c];
    cout << "enter the elements now" << endl;
    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= c - 1; j++)
        {
            cin >> arr[i][j];
        }
    }

    // max

    int max = INT16_MIN;
    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= c - 1; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
                }
    }
    cout << "max is : " << max;

    return 0;
}