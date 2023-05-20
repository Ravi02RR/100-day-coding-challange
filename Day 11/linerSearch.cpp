#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    // 1 is present or not

    cout << "Enter the key: ";
    int key;
    cin >> key;
    bool found = search(arr, 10, key);

    if (found)
    {
        for (int i = 0; i < 10; i++)
        {
            if (arr[i] == key)
            {
                cout << "Key is present at index " << i << endl;
                break;
            }
        }
    }
    else
    {
        cout << "Key is absent" << endl;
    }

    return 0;
}
