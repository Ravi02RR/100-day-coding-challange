#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "enter the mumber of rows" << endl;
    cin >> r;
    int c;
    cout << "enter the mumber of column" << endl;
    cin >> c;
    int arr[r][c];
    cout << "enter the elements now" << endl;
    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= c - 1; j++)
        {
            cin >> arr[i][j];
        }
    }

    // normal print
    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= c - 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;


    // transpose

     for (int j = 0; j <= r - 1; j++)
    {
        for (int i = 0; i <= c - 1; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //store it in  a new matrix
    
    return 0;
}