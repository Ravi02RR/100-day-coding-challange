//  // 4 12 11  20
//  4-12-11-20
//  4-11-12-20

#include <vector>

void insertionSort(int n, std::vector<int> &arr)
{
    for (int i = 1; i < n; i++) // Start from the second element
    {
        int temp = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > temp) // Compare with previous elements
        {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = temp; // Insert the element in the correct position
    }
}
