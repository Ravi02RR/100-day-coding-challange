// array is a ds
// storage to store data
// colelction of similar type of data
#include <iostream>
using namespace std;
int main()
{
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        cout << "enter " << i << "th element" << endl;
        cin >> arr[i];
        cout << arr[i] << "  ";
    }
    // return 0;
}
