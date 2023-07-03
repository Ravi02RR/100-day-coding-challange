// // 10 10  7 6 14 9
// // a>b then swap(a,b)....continuee..
// until no more swaps are needed.

#include <bits/stdc++.h>
#include <vector>
using namespace std;
void bubbleSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}
