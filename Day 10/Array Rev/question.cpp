#include <iostream>
#include <limits> // Include the <limits> header for INT16_MIN and INT16_MAX
using namespace std;

int getMax(int num[], int n)
{
    int max = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }

    return max; // Return the maximum value
}

int getMin(int num[], int n)
{
    int min = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }

    return min; // Return the minimum value
}

int main()
{
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    int num[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element of index " << i << ": ";
        cin >> num[i];
    }

    cout << "Maximum value is " << getMax(num, size) << endl;
    cout << "Minimum value is " << getMin(num, size) << endl;

    return 0;
}
