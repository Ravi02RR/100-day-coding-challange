#include <iostream>
using namespace std;

void update(int arr[], int n)
{
    cout << "inside the function" << endcccdl;

    arr[0] = 120; 

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Going back to main" << endl;
}

int main()
{
    int arr[3] = {1, 2, 3};
    update(arr, 3);

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}