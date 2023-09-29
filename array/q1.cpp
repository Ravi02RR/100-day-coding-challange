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

    cout << "Roll numbers below 35 marks are:" << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 35)
        {
            cout << "Student " << i + 1 << " obtained less than 35 marks." << endl;
        }
    }

    // length of arrya

    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "size of arrya is " << size << endl;

    return 0;
}
