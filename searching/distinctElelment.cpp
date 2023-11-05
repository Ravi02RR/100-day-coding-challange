#include <iostream>
using namespace std;
int main()
{
    int arr[8] = {0, 1, 2, 3, 4, 6, 9, 12};
    int n = 8;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i+1] != arr[i]+1)
    //     {
    //         cout << arr[i]+1;
    //         break;
    //     }
    // }

    int low=0;
    int high=n-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (arr[mid])
        {
            /* code */
        }
        
    }
    

    return 0;
}