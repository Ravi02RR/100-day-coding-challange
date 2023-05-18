#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    cout << "size of array is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "the element at " << i << "th index is" << arr[i] << endl;
    }
}

int main()
{
    int ARR[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 4, 23, 2242, 34};
    int size = sizeof(ARR) / sizeof(ARR[0]);

    printArray(ARR, size);
}