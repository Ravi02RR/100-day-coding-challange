#include <iostream>
using namespace std;
void insertionsort(int arr[], int n)
{

    for (int i = 1; i < n; ++i)
    {
        int j = i;
        while (j >= 1 && arr[j] < arr[j - 1])
        {
            if (arr[j] >= arr[j - 1])
            {
                break;
            }
            else if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
                j--;
            }
        }
    }
}
void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if (flag == true)
        {
            break;
        }
    }
}
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = INT8_MAX;
        int index = -1;
        for (int j = i; j < n - 1; j++)
        {

            if (arr[j] < min)
            {
                min = arr[j];
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
}

int main()
{

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionsort(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
