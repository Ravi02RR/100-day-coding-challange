#include <iostream>
using namespace std;

int main()
{
    cout << "Enter total number of students: ";
    int n;
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid number of students!" << endl;
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter marks for student " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Total marks is :" << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum << endl;

    // length of arrya

    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "size of arrya is " << size << endl;

    return 0;
}
