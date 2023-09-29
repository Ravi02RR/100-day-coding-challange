#include <iostream>
using namespace std;
bool linearSearch(int arr[], int size, int value)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int maxi(int arr[], int size)
{
    if (size <= 0)
        return INT8_MIN;

    int maxVal = arr[0];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] > arr[j] && arr[i] > maxVal)
            {
                maxVal = arr[i];
            }
        }
    }
    return maxVal;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int value = 9;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << linearSearch(arr, size, value);
    cout << endl;
    cout << maxi(arr, size);
    return 0;
}