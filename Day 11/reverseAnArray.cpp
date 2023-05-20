#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printarrry(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {1, 4, 0, 5, -2, 15};
    int arr1[] = {1, 4, 5, -2, 15};

    reverse(arr, 6);
    reverse(arr1, 5);

    printarrry(arr, 6);
    printarrry(arr1, 5);

    return 0;
}